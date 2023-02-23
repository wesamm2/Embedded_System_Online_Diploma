/******************************************************************************
str_ex2
      created on:23/2/023
      outhor:wesam abdallah

*******************************************************************************/

#include <stdio.h>
#include<string.h>
int main()
{
char a[100],c;
int count =0;
printf("enter a string:");
scanf("%s",a);

for(int i=0;i<a[i]!='\0';i++){
    count++;}
printf("length of string:%d",count);
    return 0;
}
