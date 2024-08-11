#Write a Python program to find the second smallest number in a list.
num = [12, 25, 4, 57, 34, 4, 43]

unique_numbers = sorted(set(num))

if len(unique_numbers) >= 2:
    print("The second smallest number is:", unique_numbers[1])
else:
    print("There are not enough unique numbers")

