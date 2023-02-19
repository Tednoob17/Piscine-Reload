#!/usr/bin/python3
if __name__ == "__main__":
	import sys
	o2=len(sys.argv) - 1
	if (o2) == 0:
		print("0 arguments.")
	elif (o2) == 1:
		print("1 argument :")
		print("{}: {}".format(o2,sys.argv[o2]))
	elif (o2) > 1:
		print("{} arguments:".format(o2))
	for i in range(o2):
		print("{}: {}".format(i + 1, sys.argv[i + 1]))
