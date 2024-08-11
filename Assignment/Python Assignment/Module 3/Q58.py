#Write a Python program to read a random line from a file.
import random

filename = 'Q57.py'
with open(filename) as file:
    lines = file.readlines()

if lines:
    print(random.choice(lines).strip())
else:
    print("The file is empty.")
