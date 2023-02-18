/******************************************************************************

                       EX6:write c program to FIND FACTORIAL OF NUMBER
                       created on:15/2/2023
                       outhor:wesam abdallah
*******************************************************************************/

#include <stdio.h>

int main()
{
    char c;
    float a,b;
    
    printf("Enter operator either +or-or*or/:");
    scanf("%c",&c);
    printf("Enter two operands");
    scanf("%f %f",&a,&b);
    switch(c){
        case'+':
        printf("%f",a+b);
        break;
        case'-':
        printf("%f",a-b);
        break;
        case '*':
        printf("%f",a*b);
        break;
        case '/':
        printf("%f",a/b);
        break;
    }
}