#Write a Python program to find the highest 3 values in a dictionary

dict = {'a': 100, 'b': 200, 'c': 300, 'd': 400, 'e': 500}
highest_values = sorted(dict.values(), reverse=True)[:3]
print("Highest 3 values:", highest_values)
