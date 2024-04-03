#!/bin/sh -efu

WORKDIR="$(dirname $(readlink -e $0))"

if [ ! -f /run/.containerenv ]; then
uid=500
    gid=500
    subuidSize=$(( $(podman info --format "{{ range \
       .Host.IDMappings.UIDMap }}+{{.Size }}{{end }}" ) - 1 ))
    subgidSize=$(( $(podman info --format "{{ range \
       .Host.IDMappings.GIDMap }}+{{.Size }}{{end }}" ) - 1 ))

    

    podman run -it --rm --name $(mktemp -u angryrunt-programming-lern-container-XXXXXX) \
        --security-opt seccomp=unconfined --cap-add all \
              --user $uid:$gid \
      --uidmap 0:1:$uid \
      --uidmap $uid:0:1 \
      --uidmap $(($uid+1)):$(($uid+1)):$(($subuidSize-$uid)) \
      --gidmap 0:1:$gid \
  --gidmap $gid:0:1 \
  --gidmap $(($gid+1)):$(($gid+1)):$(($subgidSize-$gid)) \
           -v "$WORKDIR:/host" \
           --cap-add SYS_PTRACE \
           angryrunt/programming-lern-container bash $@
else
    bash $@
fi
