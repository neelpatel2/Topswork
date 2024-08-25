#Write a Python program to count the number of lines in a text file.
file_name = 'sample.txt'

count = 0
with open(file_name, 'r') as file:
    for line in file:
        count += 1

print(f"The number of lines in the file is: {count}")

