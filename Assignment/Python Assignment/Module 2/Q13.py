#Write a Python program to count the number of characters (character frequency) in a string.

name = input("Enter a something...")
unique_ch = ""
emp_ = dict()
for ch in name:
    if ch not in unique_ch:
        unique_ch += ch
        emp_.update({ch:name.count(ch)})
print(emp_)

print(unique_ch)
