/******************************************************************************

                       EX4:write c program to CHECK CHAR (ALPHABET OR NOT)
                       created on:15/2/2023
                       outhor:wesam abdallah
*******************************************************************************/

#include <stdio.h>

int main()
{
char a;
printf("Enter a char:");
scanf("%c",&a);
if(a>='a'&&a<='z'||a>='A'&&a<='Z')
printf("%c is a ALPHABET",a);
else
printf("%c is not ALPHABET",a);

    return 0;
}
