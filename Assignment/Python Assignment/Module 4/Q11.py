#Write a Python program to write a list to a file. 
file_name = 'sample1.txt'

list = ['apple', 'banana', 'cherry', 'date']

with open(file_name, 'w') as file:
    for item in list:
        file.write(item + '\n')  

print(f"List has been written to {file_name}")
