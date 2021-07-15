#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include "utils.h"

typedef struct ground
	{
		char Name[20];
		char Type[40];
		int range;
		char tile[10];
	}Ground;

typedef struct naval
    {
    	char Name[20];
		char Type[40];
		int range;
		char tile[10];
    }Naval;


int main(){
    Ground Tank = {"Tank", "Ground", 5, "Plains"};
    struct ground Ground = {"Tank", "Ground", 5, "Plains"};
	

    Naval Cruiser = {"Cruiser", "Naval", 6, "Shoal"};
    struct naval Naval = {"Cruiser", "Naval", 6, "Shoal"};


}