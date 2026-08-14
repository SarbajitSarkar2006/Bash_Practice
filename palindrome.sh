#!/bin/bash

if [ $# -eq 0 ]; then
    echo "Error: Please provide a string to check"
    echo "Usage: $0 <string>"
    exit 1
fi

original=$1

reversed=$(echo "$original" | rev)

if [ "$original" == "$reversed" ]; then
    echo "Result: '$original' is a palindrome"
else
    echo "Result: '$original' is not a palindrome"
fi    