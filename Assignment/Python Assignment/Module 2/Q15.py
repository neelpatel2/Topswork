# Write a Python program to count occurrences of a substring in a string.

string = input("Enter the string: ")
substring = input("Enter the substring to count: ")
count = string.count(substring)
print(f"The given substring occurs {count} times in the string.")
