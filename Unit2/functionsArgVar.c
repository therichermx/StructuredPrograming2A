#include <stdio.h>
#include "utils.h"
#include <stdlib.h>

int var1 = 10;
int var2 = 20;

int main ( int argc, char**argv){
    printf( "var1: %d, var2: %d\n", var1, var2);
    printf( "function was executed:\n");
    //paso de argumentos por direccion//
    modifyVariable(var1, var2);
    printf("var= %d, var= %d\n", var1, var2);

    //get address of var1 and var2
    //& = "la dirección de:" --> &x00879fb
    int *myptr1 = &var1;
    int *myptr2 = &var2;

    ShowIntAddress(myptr1);
    ShowIntAddress(myptr2);

    printf("address var1: %p, \t address var2: %p, \n", &var1, &var2);
    printf("Pointer has modificated the var1: \n");
    //*myptr = "El valor de" ---> &x00879fb =x;
    *myptr1 = 20;
    var2 = 40;

    printf("var1= %d, var2= %d\n", var1, var2);

    printf("////////////Pointers into functions///// \n");
    
    printf("var1= %d, var2= %d\n", var1, var2);
    printf("function address has been executed: \n");
    //pasos de argumento por direccion:
    modifyVariableAddress(&var1, &var2);
    printf("var1= %d, var2= %d\n", var1, var2);

    return 0;
}