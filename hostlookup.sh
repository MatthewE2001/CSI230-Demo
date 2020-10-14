#!/bin/bash
#comments go here

while read line; do echo $line;
  for h in line
  do
    out=$(host -W1 -t A $line)
    if [ $? -eq 0 ]; then
      ip=$(echo $out | cut -d " " -f 4)
      echo ${line},$ip
    else
      echo "${line},not found"
    fi
  done
done < fileCheck.txt

