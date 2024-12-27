# #Write a Python function that takes a list of words and returns the length of the longest one.
words = ["cherry", "apple", "monkey", "chocolatecake"]
length = 0
for char in words:
    if len(char) > length:
         length = len(char)
print("Length of the longest word:",length)

