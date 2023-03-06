#!/usr/bin/python3
def divisible_by_2(my_list=[]):
        my_list_copy=my_list.copy
        for element in my_list_copy:
                if element % 2 == 0:
                        element = True
                else:
                        element = False

                return my_list_copy
