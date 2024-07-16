#Write a Python program to sum of three given integers.However,if two values are equal sum will be zero. 
a = int(input("Enter the 1 number: "))
b = int(input("Enter the 2 number: "))
c = int(input("Enter the 3 number: "))

if a == b or b == c or a == c:
    result = 0
else:
    result = a + b + c
print(f"The sum of the three integers is: {result}")
