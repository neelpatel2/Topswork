#Write a Python function that takes two lists and returns true if they have at least one common member.
def common_member(list1, list2):
    for item in list1:
        if item in list2:
            return True
    return False

list1 = [1, 2, 3, 4]
list2 = [5, 4, 8, 7]
result = common_member(list1, list2)
print(result)
