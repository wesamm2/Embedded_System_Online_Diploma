/******************************************************************************

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
gets(a);
printf("enter afreq char:");
scanf("%c",&c);
for(int i=0;i<strlen(a);i++){
    if(a[i]==c)
    count++;
}
printf("freq of %c=%d",c,count);
    return 0;
}
