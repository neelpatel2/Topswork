#What is Instantiation in terms of OOP terminology?
'''
Instantiation in object-oriented programming (OOP) refers to the process of creating a new instance of a class.
An instance is a concrete occurrence of any object created from a class blueprint.
#Example
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

person1 = Person("Neel", 20)
person2 = Person("Jeel", 22)

print(person1.name)  
print(person2.age) 
 
person1 and person2 are instances of the Person class created by calling Person("Neel", 20) and Person("Jeel", 22).

'''
