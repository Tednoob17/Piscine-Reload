#!/usr/bin/python3
if __name__ == "__main__":
	import sys
	sum=0
	o1=len(sys.argv) - 1
	for i in range (o1):
		sum += int(sys.argv[i + 1])

	print("{}".format(sum))
