#!/usr/bin/python3
import sys
if len(sys.argv) == 0:
	print("0 arguments.")
elif len(sys.argv) == 1:
	print("1 argument :")
	print("{} arguments:".format(argv))
elif len(sys.argv) > 1:
	print("{} arguments:".format(argv))
	for i in range(len(sys.argv)):
		print("{}: {}".format(argv[i],sys.argv[i]),end="")
