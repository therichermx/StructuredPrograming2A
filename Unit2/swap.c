#include <stdio.h>
#include "utils.h"
#include <stdlib.h>

int a = 10;
int b = 20;

int main ( int argc, char**argv){
    printf( "a: %d, b: %d\n", a, b);
    printf( "function was executed:\n");
    //paso de argumentos por direccion//
    modifyVariable(a, b);
    printf("var= %d, var= %d\n", a, b);

    //get address of a and b
    //& = "la dirección de:" --> &x00879fb
    int *myptr1 = &a;

    int *myptr2 = &b;

    ShowIntAddress(myptr1);
    
    ShowIntAddress(myptr2);

    printf("address a: %p, \t address b: %p, \n", &a, &b);
    printf("Pointer has modificated the a: \n");
    //*myptr = "El valor de" ---> &x00879fb =x;
    *myptr1 = 20;
    b = 40;

    printf("a= %d, b= %d\n", a, b);

    printf("////////////Pointers into functions///// \n");
    
    printf("a= %d, b= %d\n", a, b);
    printf("function address has been executed: \n");
    //pasos de argumento por direccion:
    modifyVariablesAddress(&a, &b, 3);
    printf("a= %d, b= %d\n", a, b);

    return 0;
}