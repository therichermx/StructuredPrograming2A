#include <stdio.h>
#include "./utils.h"


int myNumber = 3;
float myFloat = 3.1416;
char myString[225] = "Hola mundo";


//void sayHello(char message[]){
    //printf("%s", message);
//}
//primer método para funciones
//declarar
void sayMyname(char message[]);

//int addTwoNumbers(int argumento1, int argumento2); //declarando

int main(){
    sayHello("Hola mundo");
    sayMyname("Ricardo");
    int myResult = addTwoNumbers(2,5);
    printf("myResult is equal to: %d \n", myResult);

    printf("%d", libInteger);
    return 0;
}

//segundo método para funciones
// definir
void sayMyname(char message[]){
    printf("%s\n", message);
}

//int addTwoNumbers(int argumento1, int argumento2){
    //int result = argumento1+argumento2;
    //return result;
//}