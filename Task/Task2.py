import string

def check_password(password):
    special_characters = set(string.punctuation)
    
    has_upper = has_lower = has_digit = has_special = False
    
    for char in password:
        if char.isupper():
            has_upper = True
        elif char.islower():
            has_lower = True
        elif char.isdigit():
            has_digit = True
        elif char in special_characters:
            has_special = True
    
    if len(password) < 8:
        print("Password must be at least 8 characters long.")
    elif not has_upper:
        print("Password must contain at least one uppercase letter.")
    elif not has_lower:
        print("Password must contain at least one lowercase letter.")
    elif not has_digit:
        print("Password must contain at least one digit.")
    elif not has_special:
        print("Password must contain at least one special character [@, _, -, !].")
    else:
        print("Password is created Sucessfully")

input = input("Enter your password: ")
check_password(input)
