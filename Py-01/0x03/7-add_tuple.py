#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
    for i in range(0, len(tuple_a)-1):
        if(tuple_a[i] == 0):
              tuple_a[i] = 0
        elif (tuple_b[i] == 0):
              tuple_b[i] = 0
        else:
              print("",format(tuple_a[i]+tuple_b[i]),end="")
