#include<stdio.h>
#include<conio.h>
#include<string.h>
 int main(){
 	 char str1[20],str2[20];
 	 int result;
 	 printf("Enter the First no or String:");
 	    scanf("%s",str1);
 	printf("Enter the Second no or String  :");
 	   scanf("%s",str2);
 	    
 	       result=strcmp(str1,str2);
 	  if(result==0){
 	  	printf("%s is Similar to th the %s",str1,str2);
	   }
	    else if(result<0){
	    	printf(" Value of %s in ASCII is lessthan %s",str1,str2);
		}
		else{
			printf("Value of the %s is Greater than %s",str1,str2);
		}
		return 0;
 }
