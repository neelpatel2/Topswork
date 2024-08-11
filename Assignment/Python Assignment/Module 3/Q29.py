#Write a Python program to unzip a list of tuples into individual lists.

my_list = [('N', 1, 'e'), ('e', 2, 'l'), ('P', 3, 'a')]

items, nums, alpha = zip(*my_list)

items = list(items)
nums = list(nums)
alpha = list(alpha)

print("Items:", items)
print("Nums:", nums)
print("Alpha:", alpha)
