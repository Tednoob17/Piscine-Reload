#!/bin/bash
echo "Enter a number"
read num
case ${num} in 
	*[0-9]*) true;;
	*) false;;
esac
