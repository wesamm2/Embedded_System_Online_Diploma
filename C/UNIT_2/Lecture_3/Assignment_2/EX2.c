/******************************************************************************
.                      EX2:write c program to check(VOWEL or CONSONANT)
                       created on:15/2/2023
                       outhor:wesam abdallah

*******************************************************************************/

#include <stdio.h>

int main()
{
    char a;
    printf("Enter an alphabet:");
    scanf("%c",&a);
    if(a=='a'||a=='A'||a=='e'||a=='E'||a=='u'||a=='U'||a=='i'||a=='I'||a=='o'||a=='O')
    printf("%c is vowel",a);
    else
    printf("%c is aconsonant",a);

    return 0;
}
