#include <stdio.h>
#include <string.h>
#include "utils.h"

//arrays
int myIntArray[5];

int main(){
    fillArray(myIntArray, 5);
    printArray1D(myIntArray, 5);
    printf("%d", myIntArray[0]);
    printf("%d", myIntArray[1]);
    printf("%d", myIntArray[2]);
    printf("%d", myIntArray[3]);
    printf("%d", myIntArray[4]);
    
    return 0;
}