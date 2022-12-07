#/usr/bin/python3
def new_in_list(my_list, idx, element):
    list_copy=my_list.copy()
    for i in range(0, len(my_list)):
        if i == idx :
            list_copy[i]=element

    return list_copy
