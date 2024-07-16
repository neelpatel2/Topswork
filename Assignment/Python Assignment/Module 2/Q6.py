#Write python program that swap two number with temp variable and without temp variable. 
#With temp variable
print("With Temp variable")
a = 10
b = 25
print("Before swapping:")
print("a =", a)
print("b =", b)
temp = a
a = b
b = temp
print("After swapping:")
print("a =", a)
print("b =", b)
#Without temp variable 
print("Without temp variable")
a = 15
b = 10
print("Before swapping:")
print("a =", a)
print("b =", b)
a, b = b, a
print("After swapping:")
print("a =", a)
print("b =", b)

