from sys import argv as ag

def addToNumber (number1, number2):
    print('start program: addToNumber executed... \n')
    return number1+number2

answer = False

def isEven (aNumber):
    if(aNumber%2 == 0):
        return ("It's even")
        #print("It's even")
    else:
        return("It's odd")
        #print("It's odd")

if __name__ == "__main__":
    #print( f'la suma de dos numeros = {addToNumber(int(ag[1]),int(ag[2]))}')
    n1 = int(input('dame numero 1:\t'))
    n2 = int(input('dame numero 2:\t'))

    print( f'la suma de dos numeros = {addToNumber(n1,n2)}')

    answer = isEven (addToNumber(n1,n2))