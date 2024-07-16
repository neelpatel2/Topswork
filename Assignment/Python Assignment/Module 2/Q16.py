# Write a Python program to count the occurrences of each word in a given sentence.

sentence = input("Enter a sentence: ")

words = sentence.split()

word_count = {}
for index, word in enumerate(words):
    word_count[word] = word_count.get(word, 0) + 1
print(word_count)

