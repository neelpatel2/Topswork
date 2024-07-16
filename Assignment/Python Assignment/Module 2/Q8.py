#Write a Python program to test whether a passed letter is a vowel or not.

letter = input("Enter a letter: ")

if letter.lower() in 'aeiou':
    print("The letter is a vowel.")
else:
    print("The letter is not a vowel.")

