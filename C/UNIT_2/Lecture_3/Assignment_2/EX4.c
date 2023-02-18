/******************************************************************************

                       EX4:write c program to CHECK NUMBER (POSITIVE OR NEGATIVE)
                       created on:15/2/2023
                       outhor:wesam abdallah
*******************************************************************************/

#include <stdio.h>

int main()
{
    float a;
    
    printf("Enter a number:");
scanf("%f",&a);
if(a>0)
printf("%f is POSITIVE",a);
else if(a<0)
printf("%f is NEGATIVE",a);
else 
printf("you entered zero");
    return 0;
}
