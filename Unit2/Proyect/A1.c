//Design a program that receives a list of numbers using argv argument and print the average value in the console.
#include <stdio.h>
#include <stdlib.h>
#include "/mnt/c/Users/theri/Documents/UPY/3er cuatrimestre/StructuredProgramming2A/Unit2/utils.h"

//Receive input
int main(int argc,char *argv[]){
	int avg=0,i;
	if(argc<=1){
	//no input
	printf("No arguments. Please input the arguments. \n \n");
	return(0);
	}
	else{
		for(i=1;i<argc;i++){
			avg+=atoi(argv[i]);
		}
	}
//print output
avg/=argc-1;
	printf("The average is: %d \n \n",avg); 
}