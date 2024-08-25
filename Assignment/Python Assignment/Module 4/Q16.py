#Can one block of except statements handle multiple exception?
'''
Yes, a single except block in Python can handle multiple exceptions. You can specify multiple exceptions 
in a single except clause by using a tuple of exception classes. If any of the specified exceptions are 
raised in the try block, the except block will handle them.
'''
#Example:
try:
    number = int(input("Enter a number: "))
    result = 10 / number
except (ValueError, ZeroDivisionError) as e:
    print(f"An error occurred: {e}")
