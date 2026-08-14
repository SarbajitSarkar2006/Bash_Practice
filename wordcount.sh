#!/bin/bash

if [ $# -eq 0 ]; then
    echo "Error: No input provided"
    echo "Usage: $0 <type your sentence here>"
    exit 1
fi

word_count=$(echo "$@" | wc -w )

echo "Text provided : $@"
echo "Total number of words : $word_count"