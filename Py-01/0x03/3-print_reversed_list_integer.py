#!/usr/bin/python3
def print_reversed_list_integer(my_list=[]):
    p = len(my_list)
    for i in my_list :
        print("{}".format(my_list[p - i]))
