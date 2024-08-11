#Write a Python program to find the repeated items of a tuple.
my_tuple = (10,13,43,19,10,21,21,13,34,43)

items = set()
for item in my_tuple:
    if my_tuple.count(item) > 1:
        items.add(item)

print("Repeated items:", items)

