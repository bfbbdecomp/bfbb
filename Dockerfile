FROM ubuntu:20.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && \
  apt-get install -y \
    build-essential \
    clang-format \
    python3 \
    wget \
    wine

RUN dpkg --add-architecture i386 && \
  apt-get update && apt-get install -y wine32

RUN wget https://github.com/devkitPro/pacman/releases/download/v1.0.2/devkitpro-pacman.amd64.deb \
  -O devkitpro.deb && \
  echo ebc9f199da9a685e5264c87578efe29309d5d90f44f99f3dad9dcd96323fece3 devkitpro.deb | sha256sum --check && \
  apt install -y ./devkitpro.deb && \
  rm devkitpro.deb

RUN dkp-pacman -Syu gamecube-dev --noconfirm

RUN mkdir /bfbbdecomp
WORKDIR /bfbbdecomp

ENV DEVKITPRO=/opt/devkitpro
ENV DEVKITPPC=/opt/devkitpro/devkitPPC

ENV MWCIncludes="C:\\"
ENV MWLibraries="C:\\"
ENV MWLibraryFiles="C:\\"
ENV Path=/bfbbdecomp/tools/mwcc_compiler/2.0/
# this is a hack for github actions, use '-e WINEPREFIX /root/.wine' locally
ENV WINEPREFIX=/bfbbdecomp/.wine
