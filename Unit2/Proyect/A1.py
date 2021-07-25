#Design a program that receives a list of numbers using argv argument and print the average value in the console.
import sys

myList = [float(arg) for arg in sys.argv[1:]] #input
print('Average: {}'.format(sum(myList) / len(myList))) #output