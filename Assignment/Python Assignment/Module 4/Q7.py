#Write a Python program to read a file line by line store it into a variable.
def file_to_variable(file_name):
    with open(file_name, 'r') as file:
        content = file.read()  
    return content

file_name = 'sample.txt'

variable = file_to_variable(file_name)
print(variable)

