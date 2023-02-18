/******************************************************************************

                       EX6:write c program to FIND FACTORIAL OF NUMBER
                       created on:15/2/2023
                       outhor:wesam abdallah
*******************************************************************************/

#include <stdio.h>

int main()
{
int a;

printf("Enter an integer:");
scanf("%d",&a);

if(a==0)
printf (" the fact=1");
else if(a>0){
    int fact =1;
    for(int i=1;i<=a;i++){
        fact*=i;
    }
    	printf ("the fact = %d ", fact);
}
else  
printf ("Error !! Factorial of the negative numbers doesn't exist");
    return 0;
}
