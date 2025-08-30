#include<stdio.h>
#include<string.h>


 void insertsubstring(char*src,char*insert,int pos,char*res)
 {
 int n=strlen(src);
 strncpy(res,src,pos);
 res[pos]='\0';
 strcat(res,insert);
 strcat(res,src+pos);
 }
 int main()
 {
 	char str[100],insert[100];
 	char res[100];
 	printf("Enter the String:");
 	gets(str);
 	printf("Enter the substring that U want to Add in the String:");
 	gets(insert);
 	 insertsubstring(str,insert,6,res);
 	 printf("After the Inserting the ubstring :%s",res);
 	 return 0;
 	
 }
