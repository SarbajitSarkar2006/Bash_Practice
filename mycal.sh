#!/bin/bash

if [ $# -eq 0 ]; then 
 cal
 exit 0
fi

if [ $# -eq 1 ]; then
 month=$1

 if [ "$month" -ge 1 ] && [ "$month" -le 12 ]; then
 current_year=$(date +%Y)
 cal $month $current_year
 exit 0
 else
 echo "Month must be a number between 1 to 12"
 exit 1
 fi
fi

echo "Error: too many arguments "
echo "Usage:$0 [month_number]"
exit 1 