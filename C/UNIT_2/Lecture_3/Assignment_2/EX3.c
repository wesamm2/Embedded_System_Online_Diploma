/******************************************************************************
.                      EX3:write c program to find the largest number
                       created on:15/2/2023
                       outhor:wesam abdallah

*******************************************************************************/

#include <stdio.h>

int main()
{
    float a,b,c;
    printf("Enter three numbers:");
    scanf("%f %f %f",&a,&b,&c);
    if(a>=b){
        if(a>=c)
        printf("largest number=%f",a);
        else
         printf("largest number=%f",c);
    }
    else{
        if(b>=c){
             printf("largest number=%f",b);
        }
        else  printf("largest number=%f",c);
    }
   

    return 0;
}
