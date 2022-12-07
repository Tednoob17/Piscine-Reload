#!/usr/bin/python3
def replace_in_list(my_list, idx, element):
    for i in range(0, len(my_list)):
        if (i == idx):
            my_list[i]=element

    return(my_list)
