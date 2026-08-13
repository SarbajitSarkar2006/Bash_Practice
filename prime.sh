#!/bin/bash

if [ $# -ne 2 ]; then
    echo "Error: Please provide exactly two integers."
    echo "Usage: $0 <a> <b>"
    exit 1
fi

a=$1
b=$2

# 2. Swap 'a' and 'b' if 'a' is greater than 'b'
if [ "$a" -gt "$b" ]; then
    temp=$a
    a=$b
    b=$temp
fi

echo "Prime numbers between $a and $b:"

for (( n=a; n<=b; n++ )); do
    # Numbers less than 2 are not prime
    if [ "$n" -lt 2 ]; then
        continue
    fi
    
    is_prime=1
    
    # Check for factors from 2 up to the square root of 'n'
    for (( i=2; i*i<=n; i++ )); do
        if [ $((n % i)) -eq 0 ]; then
            is_prime=0
            break
        fi
    done
    
    # If no factors were found, it is a prime number
    if [ "$is_prime" -eq 1 ]; then
        echo -n "$n "
    fi
done

# Print a newline character at the end for clean terminal output
echo