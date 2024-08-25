#Write a Python program to copy the contents of a file to another file.
source_file = 'sample.txt'
destination_file = 'copy.txt'

with open(source_file, 'r') as src_file, open(destination_file, 'w') as dest_file:
    content = src_file.read()
    dest_file.write(content)

print(f"Contents of '{source_file}' have been copied to '{destination_file}'.")

