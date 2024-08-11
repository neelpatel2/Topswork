# How will you compare two lists?
strings_list = ["abc", "xyz", "aba", "1221", "aa", "a", "bb"]
count = 0
for s in strings_list:
    if len(s) >= 2 and s[0] == s[-1]:
        count += 1
print("Number of special strings:", count)
