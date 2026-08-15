#!/bin/bash

if [ $# -eq 0 ]; then
 echo "Error: No arguments provided "
 echo "Usage: $0 <word1> <word2> <word3> ..."
fi

reversed_args=""

for arg in "$@" ; do
 reversed_args="$arg $reversed_args"
done

echo "Original order: $@ "
echo "Reversed order: $reversed_args"

