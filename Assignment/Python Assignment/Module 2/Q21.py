#Write a Python function to reverses a string if its length is a multiple of 4.

string = input("Enter a string: ")

if len(string) % 4 == 0: 
    string = string[::-1]
print(string)

