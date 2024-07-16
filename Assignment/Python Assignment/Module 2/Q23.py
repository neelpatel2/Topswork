# Write a Python function to insert a string in the middle of a string.

string =input("Enter a String:")
insert = input("Enter a string to insert:")

middle = len(string) // 2

result = string[:middle] + insert + string[middle:]

print(result)  