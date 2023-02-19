#!/usr/bin/python3
from calculator_1 import add,mul,sub,div
import sys
j = len(sys.argv) - 1
l={'+' : add, '-': sub,'*':mul, '/' : div}
if (j) < 3 :
	print("Usage: ./100-my_calculator.py <a> <operator> <b>")
	sys.exit(1)
if (sys.argv[2]) not in list(l.keys()) :
	print("Unknown operator. Available operators: +, -, * and /")
	sys.exit(1)
else:
	a = int(sys.argv[1])
	b = int(sys.argv[3])
	print("{} {} {} = {}".format(a , sys.argv[2] , b, l[sys.argv[2]](a, b) ))
