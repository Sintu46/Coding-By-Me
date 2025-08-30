/*STRSTR fun--> is used to search substring in a  String ,it returns pointer value if string is found , Null for not find a 
substring in a string.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char mainstring[100]="The strstr() function is searches a substring in a String.";
	//char substring[199]="searches";
	char substring[100]="Jack";
	char *res=strstr(mainstring,substring);
	if(res)
	{
		printf("Substring '%s' is at the %d position.",substring,(res - mainstring));
	}
	else
	{
		printf("%s is not found in the Mainstring.",substring);
	}
	return 0;
}
