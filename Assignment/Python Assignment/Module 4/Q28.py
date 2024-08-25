#What is used to check whether an object o is an instance of class A?
'''
In Python, you use the built-in isinstance() function to check whether an object o is an instance of a class A 
(or a subclass thereof).
Syntax
isinstance(o, A)
'''
#Example
class Animal:
    pass

class Dog(Animal):
    pass
my_dog = Dog()
print(isinstance(my_dog, Dog))      
print(isinstance(my_dog, str))      