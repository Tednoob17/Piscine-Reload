#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
	return ([list(map(lambda e: e * e, row)) for row in matrix])
