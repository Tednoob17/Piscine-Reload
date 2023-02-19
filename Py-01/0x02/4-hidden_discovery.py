#!/usr/bin/python3
if __name__ == "__main__":
	import hidden_4
	strings=dir(hidden_4)
	for string in strings:
		if string[:2] != "__":
			print(string)
