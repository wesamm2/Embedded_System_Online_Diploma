/******************************************************************************

                       EX7:write c program 
                       created on:15/2/2023
                       outhor:wesam abdallah

*******************************************************************************/

#include <stdio.h>

int main()
{
    float a,b;
    printf("Enter value of a:");
    scanf("%f",&a);
    printf("Enter value of b:");
    scanf("%f",&b);
    a=a-b;
    b=a+b;
    a=b-a;
    
    printf("After swapping, value of a= %.2lf\nAfter swapping ,value of b=%.2lf",a,b);

    return 0;
}

