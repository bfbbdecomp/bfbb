#!/bin/sh
docker run -w /bfbbdecomp/repo -v $(pwd):/bfbbdecomp/repo bfbbdecomp/bfbb make $@
