#Design a program that receives two numbers using argv argument
#and print the following arithmetical operations. (Python)

import sys

x=int(sys.argv[1]) #primer numero
y=int(sys.argv[2]) #segundo numero

sum=x+y #sumar
print("The sum is:",sum)

sub=x-y #restar
print("The substraction is:",sub)

times=x*y #multiplicar
print("The multiplication is:",times)

div=x/y #dividir
print("The division is:",div)

