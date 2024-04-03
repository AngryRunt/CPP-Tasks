FROM registry.altlinux.org/alt/alt:p10

USER root

ENV ALTWRAP_LLVM_VERSION=15.0 \
    CC=clang \
    CXX=clang++ \
    LD=ld.lld \
    AR=llvm-ar \
    NM=llvm-nm \
    RANLIB=llvm-ranlib

RUN apt-get update && apt-get dist-upgrade -y && \
    apt-get install -y sudo su git netcat curl wget passwd startup \
    llvm15.0-devel clang15.0-devel lld15.0-devel \
    gcc-c++ gcc-plugin-devel libstdc++-devel \
    glibc-core glibc-devel glibc-devel-static glib2-devel \
    perl ruby \
    python3-dev python3-module-setuptools python3-module-pip \
    make automake cmake ninja-build \
    strace nano bash-completion

ENV TZ=Europe/Moscow
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && \
    echo $TZ > /etc/timezone

RUN git config --system user.email "you@example.com" && \
    git config --system user.name "Your Name"

RUN echo 'WHEEL_USERS ALL=(ALL) NOPASSWD: ALL' >> /etc/sudoers

RUN groupadd -g 1000 user && \
    useradd -l -m -u 1000 -g user -G wheel -s /bin/bash user

RUN echo 'WHEEL_USERS ALL=(ALL) NOPASSWD: ALL' >> /etc/sudoers

# Do target specific stuff (e.g. install build deps)

USER user
WORKDIR /host

CMD /bin/bash
