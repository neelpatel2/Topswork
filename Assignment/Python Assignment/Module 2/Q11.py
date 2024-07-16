#Write a python program to sum of the first n positive integers.
num = int(input("Enter a positive integer: "))
if num > 0:
    sum= num * (num + 1) / 2  
    print("The sum of the first",num, "positive integers is:", sum)
else:
    print("Please enter a positive integer.")
