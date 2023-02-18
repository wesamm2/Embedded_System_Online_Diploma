/******************************************************************************

                       EX6:write c program to CALCULATE SUM OF NUMBERS
                       created on:15/2/2023
                       outhor:wesam abdallah
*******************************************************************************/

#include <stdio.h>

int main()
{
int a,sum;
printf("Enter an integer:");
scanf("%d",&a);
for(int i=0;i<=a;i++){
    sum+=i;
}
printf("sum=%d",sum);
    return 0;
}
