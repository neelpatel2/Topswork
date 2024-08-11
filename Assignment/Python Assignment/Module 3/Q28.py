#Write a Python program to remove an empty tuple(s) from a list of tuples.
tuples_list = [(13, 2), (), (33, 34, 7), (), (77,54)]

list = []
for tuple_is in tuples_list:
    if tuple_is:
        list.append(tuple_is)
print(list)
