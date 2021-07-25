#include <stdio.h>
#include <stdlib.h>
#include "/mnt/c/Users/theri/Documents/UPY/3er cuatrimestre/StructuredProgramming2A/Unit2/utils.h"

int main()
{
    char username [100];
    int age;

    printf("Enter your username: \t"); 
    scanf("%s", username); //input username

    
    printf("Enter your age:\t");
    scanf("%d", &age); //input age

    if (age <= 17){
        printf("You do not have the age to register \t"); //warning message
    }
    else{


    printf("your registration was accepted \n"); //registration message
    printf("Your username is= %s \n", username);
    printf("Your age is = %d \n", age);
    }
    printf("ending program \n"); //end
    return 0;
}