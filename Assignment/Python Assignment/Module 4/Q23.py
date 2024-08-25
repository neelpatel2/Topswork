#Write a Python class named Rectangle constructed by a length and width and a method which will compute the area of a rectangle
class Rectangle:
    def __init__(self, length, width):
        self.length = length  
        self.width = width    
    
    def area(self):
        return self.length * self.width
length = float(input("Enter the length of the rectangle: "))
width = float(input("Enter the width of the rectangle: "))

my_rectangle = Rectangle(length, width)

print("Area of the rectangle:", my_rectangle.area())
