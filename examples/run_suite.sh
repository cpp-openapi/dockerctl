#!/bin/bash

# one needs to expose the endpoint before run the suite
set -x

quiet_arg="--gtest_brief=1"

./build/examples/tests/container_list_test $quiet_arg

