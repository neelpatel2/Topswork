#What relationship is appropriate for Student and Person?
'''
The appropriate relationship between Student and Person in Python, or any object-oriented programming context,
is typically inheritance. This reflects a "is-a" relationship, where a Student is a specific type of Person
'''
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def introduce(self):
        return f"My name is {self.name} and I am {self.age} years old."

class Student(Person):
    def __init__(self, name, age, student_id):
        super().__init__(name, age) 
        self.student_id = student_id

    def introduce(self):
        return f"Student ID: {self.student_id}, {super().introduce()}"

student = Student("Neel", 20, "1254")

print(student.introduce())  
