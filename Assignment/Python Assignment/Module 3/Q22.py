#Write a Python program to check whether an element exists within a tuple.
tuple = (1, 25, 34, 41, 5,7,9,32,65)

check = 25
if check in tuple:
    print(f"{check} is in the tuple.")
else:
    print(f"{check} is not in the tuple.")
