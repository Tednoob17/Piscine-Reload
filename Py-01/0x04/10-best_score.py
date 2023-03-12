#!/usr/bin/python3
def best_score(a_dictionary):
	if not isinstance(a_dictionary, dict) or (len(a_dictionary)) == 0 :
		return None

	keys=list(a_dictionary.keys())[0]
	val=a_dictionary[keys]
	for key, value in a_dictionary.items():
		if val < value:
			val = value
			keys = key
	return(keys)
