#Write a Python program to read an entire text file.

with open('sample.txt', 'r') as file:
    content = file.read()

print(content)

