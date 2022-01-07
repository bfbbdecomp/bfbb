#!/bin/sh
docker run -w /bfbbdecomp -v $(pwd):/bfbbdecomp -u $UID bfbbdecomp/bfbb make $@
