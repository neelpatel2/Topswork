#Write a Python program to get the Fibonacci series of given range. 
num = int(input("Enter the a range: "))
a, b = 0, 1
series = []
while a <= num:
    series.append(a)
    a, b = b, a + b
print(f"The Fibonacci series up to {num} is: {series}")
