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

# take dkp from the docker hub image rather than installing pacman etc
COPY --from=devkitpro/devkitppc:20210510 /opt/devkitpro /opt/devkitpro

# create a non-root user for wine
ENV WINEPREFIX=/tmp/wine
RUN useradd --create-home user \
    && mkdir -p "${WINEPREFIX}" \
    && chown user:user "${WINEPREFIX}"

RUN mkdir /bfbbdecomp
WORKDIR /bfbbdecomp

# switch to the non-root user
USER user

ENV DEVKITPRO=/opt/devkitpro
ENV DEVKITPPC=/opt/devkitpro/devkitPPC

ENV MWCIncludes="C:\\"
ENV MWLibraries="C:\\"
ENV MWLibraryFiles="C:\\"
ENV Path=/bfbbdecomp/tools/mwcc_compiler/2.0/
