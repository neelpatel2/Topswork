#Write a Python program to count the number of characters (character frequency) in a string.

string = input("Enter a string: ")
frequency= {}
for char in string:
    if char in frequency:
        frequency[char] += 1
    else:
        frequency[char] = 1
for char, frequency in frequency.items():
    print(f"The Character'{char}'appear: {frequency} times")
