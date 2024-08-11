#Write a Python program to check whether a list contains a sub list
def sublist(list, sub_list):
    return str(sub_list)[1:-1] in str(list)[1:-1]

list = [1, 2, 3, 4, 5]
sub_list = [3, 4]

print(sublist(list, sub_list))
