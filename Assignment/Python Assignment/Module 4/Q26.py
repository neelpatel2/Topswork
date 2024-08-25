#Explain Inheritance in Python with an example? What is init? Or What Is A Constructor In Python? 
'''
Inheritance in Python
Inheritance is a fundamental concept in object-oriented programming that allows a class (the subclass or derived class)
to inherit attributes and methods from another class (the superclass or base class). This promotes code reuse and 
establishes a hierarchical relationship between classes. 

What is __init__? Or What is a Constructor in Python?
The __init__ method in Python is known as the constructor. It is a special method that is automatically called when
a new instance of a class is created. Its primary purpose is to initialize the instance attributes of the class.
'''
class Vehicle:
    def __init__(self, brand):
        self.brand = brand
    
    def honk(self):
        return "Beep beep!"

class Car(Vehicle):
    def __init__(self, brand, model):
        super().__init__(brand)  
        self.model = model
    
    def honk(self):
        return "Car horn: Honk honk!"

vehicle = Vehicle("Generic Brand")
car = Car("Toyota", "Camry")

print(vehicle.honk())  
print(car.honk())      
