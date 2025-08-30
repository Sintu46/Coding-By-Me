#include<conio.h>
#include<string.h>
 int main()
 {
 	/* char str[]= "Helloworld!";
 	  int length=strlen(str);
 	  
	   printf(" length of the String:%d\n",length);
	   */
	   char str[100];
	    int i,length=0;
	  printf("Enter the String:\n");
	  scanf("%s",str);
	   for(i=0;str[i]!='\0';i++)
	   {
	   	length++;
	   }
	   printf("\n Length of the string:%d",length);
return 0;

 }
