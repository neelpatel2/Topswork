#Write a Python function that takes a list and returns a new list with unique elements of the first list.
def unique_list(input_list):
    return list(set(input_list))

input_list = [1, 2, 2, 3, 4, 4 , 5]
result = unique_list(input_list)
print("List with unique elements:", result)
