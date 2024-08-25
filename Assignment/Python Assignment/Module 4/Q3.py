#Write a Python program to append text to a file and display the text.
file_name = 'sample.txt'
file = open(file_name, 'a')  
file.write("\nThis is the new append file added by me .") 
file.close() 
file = open(file_name, 'r')

content = file.read()
print(content)

file.close()
