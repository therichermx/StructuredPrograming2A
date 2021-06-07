from sys import argv as ag

def addToNumber (number1, number2):
    print('start program: addToNumber executed... \n')
    return number1+number2

if __name__ == "__main__":
    print( f'la suma de dos numeros = {addToNumber(int(ag[1]),int(ag[2]))}')