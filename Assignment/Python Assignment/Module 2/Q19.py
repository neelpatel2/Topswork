'''Write a Python program to find the first appearance of the substring
'not' and 'poor' from a given string, if 'not' follows the 'poor', replace the
whole 'not'...'poor' substring with 'good'. Return the resulting string'''

string = input("Enter a string: ")
if 'not' and 'poor' in string:
    not_s = string.index('not')
    poor = string.index('poor')
    if not_s < poor:
     string = string[:not_s] + 'good' + string[poor + 4:]
print(string)

