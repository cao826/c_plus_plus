FROM ubuntu:20.04
ARG DEBIAN_FRONTEND=noninteractive

RUN apt-get update
RUN apt-get install -y build-essential cmake gdb pkg-config valgrind systemd-coredump

RUN mkdir /home/project
copy . /home/project
