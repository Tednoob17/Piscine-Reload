#!/usr/bin/python3
def remove_char_at(str, n):
	for c in str:
		if n < 0 :
			return str
		return(str[:n] + str[n+1:]) 
