#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include "utils.h"

//Arrays
int myIntArray[5];

int myInt = 4;
float myFloat = 3.1416;


typedef struct mago{

    int vida;
    int mana;
    char* nombre;
    //mas atributos//
    //sayHello
    void(*Saludo) (char message[]);
    int (*sumaDosNumeros) (int argumento1, int argumento2);

}Mago;

//typedef struct Mago;

int main(){

    Mago Ricardo = {100, 100, "Ricardo", sayHello, addTwoNumbers};
    struct mago miguel = {200, 200, "miguel"};

    printf("%s\n", Ricardo.nombre);
    Ricardo.Saludo("Hola, soy un mago!");
    printf("%d\n", Ricardo.sumaDosNumeros(20,25));

    fillArray( myIntArray, 5);
        printArray1D( myIntArray,  5   );
        printf("%d",  myIntArray[0]   );
        printf("%d",  myIntArray[1]   );
        printf("%d",  myIntArray[2]   );
        printf("%d",  myIntArray[3]   );
        printf("%d",  myIntArray[4]   );
        
        Array* myArray =  returnArray();
        printf(  "\n%d ", myArray->dirArray[0] );
        printf(  "\n%d ", myArray->dirArray[1] );
        printf(  "\n%d ", myArray->dirArray[2] );

        return 0;
}