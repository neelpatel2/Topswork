#Write a Python program that will return true if the two given integer values are equal or their sum or difference is 5. 

number1 = int(input("Enter the first integer: "))
number2 = int(input("Enter the second integer: "))

if number1 == number2 or  number1 + number2 == 5 or abs(number1 - number2) == 5:
    print("True")
else:
    print("False")
