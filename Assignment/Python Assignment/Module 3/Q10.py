#Write a Python program to generate and print a list of first and last 5elements where the values are square of 
# numbers between 1 and 30
square_list = [x**2 for x in range(1, 31)]

print("First 5 elements:", square_list[:5])

print("Last 5 elements:", square_list[-5:])
