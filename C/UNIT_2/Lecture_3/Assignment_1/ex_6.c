/******************************************************************************

                       EX6:write c program 
                       created on:15/2/2023
                       outhor:wesam abdallah

*******************************************************************************/

#include <stdio.h>

int main()
{
    float a,b,c;
    printf("Enter value of a:");
    scanf("%f",&a);
    printf("Enter value of b:");
    scanf("%f",&b);
    c=a;
    a=b;
    b=c;
    
    printf("After swapping, value of a= %.2lf\nAfter swapping ,value of b=%.2lf",a,b);

    return 0;
}

