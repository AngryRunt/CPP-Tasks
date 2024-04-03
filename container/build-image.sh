#!/bin/sh -efu

podman build --force-rm=true --build-arg cuid="$(id -u)" --build-arg cgid="$(id -g)" \
	-t angryrunt/programming-lern-container container/ 2>&1 | tee ./build.log
