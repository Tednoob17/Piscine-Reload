#!/bin/bash
n=1
until ((n >= 5)); do
	echo ${n};
	n=$((n+1))
done
