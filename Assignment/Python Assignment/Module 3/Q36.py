# How Do You Check The Presence Of A Key In A Dictionary?
'''
You can check the presence of a key in a dictionary in Python using the 'in' operator the get() method. 
'''
#Example od in Operator
my_dict = {'name': 'Neel', 'age': 20, 'city': 'Surat'}
if 'age' in my_dict:
    print("Key 'age' is present in the dictionary.")
else:
    print("Key 'age' is not present in the dictionary.")
