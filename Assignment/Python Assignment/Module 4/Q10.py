#Write a Python program to count the frequency of words in a file.
from collections import Counter
import re

file_name = 'sample.txt'

count = Counter()
with open(file_name, 'r') as file:
    for line in file:
        words = re.findall(r'\b\w+\b', line.lower())
        count.update(words)

for word, count in count.items():
    print(f"'{word}': {count}")

