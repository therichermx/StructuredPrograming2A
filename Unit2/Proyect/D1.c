#include <stdio.h>

int main(){
    int month;
    int i = 1;
    printf("Input month number (1-12)\n");
    scanf("%d", &month);

    if(month <1){
        printf("Negative value, not accepted\n");
        return 0;
    }
    if(month >12){
        printf("Month number has to be between 1 and 12\n");
        return 0;
    }
    if (month == 2){
            printf("Month: February \n");
        //Imprimir lista de dias: 28
        for(i=1; i<=28 ; ++i)
        {  
            printf("Dia %d\n", i);
            
        }
        return 0;
    }else if(month == 4){
        printf("Month: April \n");
        for(i=1; i<=30 ; ++i){
            printf("Dia %d\n", i);
            
        }

    }else if(month == 9){
        printf("Month: June \n");
        for(i=1; i<=30 ; ++i){
            printf("Dia %d\n", i);
            
        }
    }else if(month == 11){
        printf("Month: November\n");
        for(i=1; i<=30 ; ++i){
            printf("Dia %d\n", i);
            
        }
    }else if (month == 1){
        printf("Month: January \n");
        for(i=1; i<=31 ; ++i){
            printf("Dia %d\n", i);
            
        }
    }else if(month == 3){
        printf("Month: March \n");
        for(i=1; i<=31 ; ++i){
            printf("Dia %d\n", i);
            
        }
    }else if(month == 5){
        printf("Month: May \n");
        for(i=1; i<=31 ; ++i){
            printf("Dia %d\n", i);
            
        }
    }else if(month == 7){
        printf("Month: July \n");
        for(i=1; i<=31 ; ++i){
            printf("Dia %d\n", i);
            
        }
    }else if(month == 8){
        printf("Month: August \n");
        for(i=1; i<=31 ; ++i){
            printf("Dia %d\n", i);
            
        }
    }else if(month == 10){
        printf("Month: October \n");
        for(i=1; i<=31 ; ++i){
            printf("Dia %d\n", i);
            
        }
    }else if(month == 12){
        printf("Month: December \n");
        for(i=1; i<=31 ; ++i){
            printf("Dia %d\n", i);
            
        }
        return 0;
    }
    

    

    
}   