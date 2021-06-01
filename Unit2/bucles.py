from sys import argv



lista = ["red", "black", "white","gray","green","yellow"]

lista2 = [i for i in range(1,101) if i%2==0]

listaEvenOdd= [[i for i in range(1,101)if i%1==0],[i for i in range(1,101) if 1%2!=0]]
print(listaEvenOdd)

if __name__ == "__main__":
    print(f'programName:{argv[0]}\n')
    print(lista, len(lista)) #size of list
    #print(lista[0])
    #print(lista[1])
    #print(lista[2])
    #print(lista[3])
    ##...
    ##...
    index = 0
    while( index < len(lista)):
        print(f'index:{index}, value:{lista[index]}')
        index= index+1
    print("---------------")
    for index in range (0,len(lista)):
        print(f'index:{index},value:{lista[index]}')