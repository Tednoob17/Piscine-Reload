#!/bin/bash

gcc -c functions/*.c
ar rc liball.a *.o
