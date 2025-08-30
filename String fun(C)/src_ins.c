#include<stdio.h>
#include<conio.h>
#include<string.h>
void insert(char *src,char*ins,int pos,char *res)
{

	strlen(src);
	strncpy(res,src,pos);
	res[pos]='\0';
	strcat(res,ins);
	strcat(res,src+pos);
}
 int main()
 {
 	char str[100]="Hello!World";
 	char ins[100]="Beautiful";
 	char res[40];
 	insert(str,ins,6,res);
 	printf("Afterthe insertion:%s\n",res);
 	return 0;
 	
 }
