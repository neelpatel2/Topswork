#What is File function in python? What is keywords to create and write file.
'''
In Python, there isn’t a specific “File function” per se, but the term often refers to a set of built-in functions 
and methods used to handle file operations. These functions and methods are part of Python's file handling capabilities
which involve interacting with the file system to create, read, write, and manage files.
'''
filename = 'example.txt'

with open(filename, 'w') as file:
    file.write("Hello,\n")
    file.write("My name is Neel i am Studing python from Tops Tech.\n")
    file.write("Python makes it easy to work with files.")

print(f"The file '{filename}' has been created and written.")
