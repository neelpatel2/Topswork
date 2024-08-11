'''Write a Python program to count the number of strings where the string length is 2 or more and the
first and last character are same from a givenlist of strings.'''
strings_list = ["aba", "xcz", "131", "2552", "caca", "a", "bdb"]
count = 0
for s in strings_list:
    if len(s) >= 2 and s[0] == s[-1]:
        count += 1
print("Number of special strings:", count)
