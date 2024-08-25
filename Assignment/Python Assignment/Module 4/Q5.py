#Write a Python program to read last n lines of a file.
def n_lines(file_name, n):
    with open(file_name, 'r') as file:
        lines = file.readlines()
    
    for line in lines[-n:]:
        print(line, end='')

file_name = 'sample.txt'
n = 5  
n_lines(file_name, n)

