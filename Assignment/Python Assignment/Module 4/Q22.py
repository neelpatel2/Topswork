#How to Define a Class in Python? What Is Self? Give An Example Of A Python Class
'''
Defining a Class in Python
In Python, a class is defined using the class keyword, followed by the class name and a colon. Inside the class,
you define methods (functions) and attributes (variables) that belong to the class.

What is self?
self is a reference to the current instance of the class. It is used to access variables and methods that belong 
to the class within its methods.
'''
class Dog:
    def __init__(self, name):
        self.name = name  
    
    def bark(self):
        print("Bhaubhau")

my_dog = Dog("Sharu")

print(my_dog.name) 
my_dog.bark() 
