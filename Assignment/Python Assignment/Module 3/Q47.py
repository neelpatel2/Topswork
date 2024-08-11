# Write a Python program to create a dictionary from a string.
string = "name:Neel,age:21,city:Surat"

disctonary = dict(pair.split(':')
    for pair in string.split(','))

print(disctonary)
 