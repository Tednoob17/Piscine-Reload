#!/bin/bash

echo -n "Enter a number:"
read number
if (( number > 5 )); then
    echo "number superior at 5";
else
    echo "number inferior at 5";
fi
