#include<stdio.h>
#include<conio.h>
#include<string.h>
 int main()
 {
 	char str[100];
 	int i ,length=0;
 	printf("Enter the Strinig:");
    scanf("%s",str);
     for(i=0;str[i]!=0;i++)
     {
     	length++;
	 }
	 printf("\n Length of the String: %d",length);
	 return 0;
 }
