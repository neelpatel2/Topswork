#Write a Python program to get a single string from two given strings,separated by a space and swap the first two characters of each string.

string1 = input("Enter the first string: ")
string2 = input("Enter the second string: ")

swap1 = string2[:2] + string1[2:]
swap2 = string1[:2] + string2[2:]

result = swap1 + " " + swap2
print("String:", result)

 