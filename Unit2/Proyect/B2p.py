import sys


def result(X):
    for num in range(X):
        if num % 3 == 0 and num % 5 == 0:
            print(str(num)+ " ", end= "\n")
        else:
            pass

##Due to result(x), it always appears as "None" when running
if __name__ == "__main__":
    X = int(input(print("Write your range \n")))
    result(X)
