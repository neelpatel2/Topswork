#What are negative indexes and why are they used?
'''Negative indexes in Python allow you to access elements from the end of a list, string, or other sequence types.
Instead of starting from zero (the first element), negative indexes count backward from the end, making it easier 
to access elements without knowing the exact length of the sequence.

How Negative Indexes Work
The last element of a sequence can be accessed with an index of -1.
The second to last element can be accessed with -2, and so on.'''

'''Why Use Negative Indexes?
1> They provide a straightforward way to access elements at the end of a sequence without calculating the 
length of the sequenc
2> They can make your code more readable, especially when you want to work with the last few elements.
3>When working with sequences of dynamic length, negative indexes can simplify the code, as you don't need 
to constantly check the length.'''

#Example
my_list = [10, 20, 30, 40, 50]
print(my_list[-1])  
print(my_list[-2])  
print(my_list[-3])  
