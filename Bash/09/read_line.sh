#!/bin/bash
n=1 #define 1st line
while IFS= read -r line #define "how to know what is line"
do
	printf "%02d	%s\n" $n "$line"  # print information format 
	n=$((n+1))	#iterate line by line
done < /etc/passwd	#use this file like 
