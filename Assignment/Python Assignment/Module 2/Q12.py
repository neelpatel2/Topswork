#Write a Python program to calculate the length of a string.

string=input("Enter a String:")
without_spaces = string.replace(" ", "")
length = len(without_spaces)
print(f"The length of the string is: {length}")
