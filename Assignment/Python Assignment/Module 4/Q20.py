#Write python program that user to enter only odd numbers, else will raise an exception.
def get_odd_number():
    try:
        number = int(input("Enter an odd number: "))
        if number % 2 == 0:
            raise ValueError(f"{number} is not an odd number!")
        print(f"{number} is an odd number.")
    except ValueError as e:
        print(e)

get_odd_number()

