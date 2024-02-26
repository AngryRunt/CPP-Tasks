#!/bin/sh -efu

WORKDIR="$(dirname $(readlink -e $0))"

if [ ! -f /run/.containerenv ]; then
    podman run -it --rm --name $(mktemp -u angryrunt-programming-lern-container-XXXXXX) \
        --security-opt seccomp=unconfined --cap-add all \
           -v "$WORKDIR:/host" \
           --cap-add SYS_PTRACE \
           angryrunt/programming-lern-container bash $@
else
    bash $@
fi
