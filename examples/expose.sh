#!/bin/bash
set -x

socat TCP-LISTEN:12345,bind=127.0.0.1,reuseaddr,fork,range=127.0.0.0/8 UNIX-CLIENT:/var/run/docker.sock