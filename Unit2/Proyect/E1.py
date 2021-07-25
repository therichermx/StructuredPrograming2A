##Reverse a sentence
import sys

sentence = input ("Your sentence: \t")

words = sentence.split() #split turns the sentence into a list

revList = reversed(words)

revSntnc = " ".join(revList) #turns the word list back into a sentence

print(revSntnc) #prints sentence