#include<stdio.h>
#include<string.h>
void insertsubstring(char *src,char *insert,int pos,char *result)
{
	int len=strlen(src);
	strncpy(result,src,pos);
	result[pos]='\0';
	strcat(result,insert);
	strcat(result,src+pos);
}
int main()
{
	char str[]="Hello World!";
	char insert[]="Beautiful";
	char result[40];
	insertsubstring(str,insert,6,result);
printf("After Insertation :%s\n",result);
return 0;
}
