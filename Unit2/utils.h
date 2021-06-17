#include <stdio.h>

#define pi 3.1416

int libInteger = 24;

void sayHello(char message[]){
    printf("%s\n", message);
}

void sayMyName( char message[]){
    printf("%s\n", message);
}

int addTwoNumbers(int argumento1, int argumento2){
    int result = argumento1 + argumento2;
    return result;
}

void modifyVariable (int argumento1, int argumento2){

    argumento1 = argumento1*2;
    argumento2 = argumento2*2;

    return;
} 

void ShowIntAddress(int* param){
    printf("address var1: %p\n", param);
}

void ShowIntValueAdress(  int* param  ){
        printf( "value: %i\n", *param );
}

void modifyVariablesAddress( int* dir1   ,  int* dir2, int multiplo ){
        ShowIntAddress(dir1);
        ShowIntValueAdress(dir1);
        ShowIntAddress(dir2);
        ShowIntValueAdress(dir2);
        *dir1 =  *dir2 * multiplo;
        *dir2 =  *dir1 * multiplo;

        return;
        
}
