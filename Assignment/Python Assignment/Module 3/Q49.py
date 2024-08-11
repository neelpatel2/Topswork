#Write a Python function to check whether a number is in a given range.
def in_range(number, start, end):
    return number in range(start, end + 1)
print(in_range(12, 1, 10))  
print(in_range(13, 1, 20)) 

