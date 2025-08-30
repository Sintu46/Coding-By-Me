/* StrCMP--> is used to compare the string  by using th ASCII code.a=65;*/
#include<stdio.h>
#include<string.h>
 int main()
 
 {
 	 char *str1="ABCD";
 	 char *str2="ABCE";
 	   int result=strcmp(str1,str2);
 	   if(result<0)
 	   {
 	   	printf("%s is less than %s",str1,str2);
		}
		 else if(result>0)
		 {
		 	printf("%s is greater than %s",str1,str2);
		 }
		 else 
		 {
		 	printf("%s is equal to the %s", str1,str2);
		 }
		 return 0;
		 	
		 
	 }
