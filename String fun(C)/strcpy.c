#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 //char str1[100]="Sintu";
 char str1[100];
 char str2[100];
 printf("Enter the first no:\n ");
 scanf("%s",str1);
// printf("Enter the second no:");
// scanf("%s",str2);
 strcpy(str2,str1);// --> dest--Where the value is copy, then source from the value is copy. 
 printf("After the Copy:%s",str2);
 return 0;
 
 
}
si
