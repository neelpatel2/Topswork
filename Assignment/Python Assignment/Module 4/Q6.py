#Write a Python program to read a file line by line and store it into a list
def file_to_list(file_name):
    with open(file_name, 'r') as file:
        lines = file.readlines()
    lines = [line.strip() for line in lines]
    return lines
file_name = 'sample.txt'
list = file_to_list(file_name)

print(list)

