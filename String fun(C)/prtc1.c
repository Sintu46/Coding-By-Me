#include<stdio.h>
int main(){
	 int i,j,n,temp;
	 int arr[100];
	 printf("Enter  the no of Element:");
	 scanf("%d",&n);
	 printf("Enter the Array :");
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d ",&arr[i]);
	 }
	 
	 for(i=0;i<n-1;i++)
	 {
	 	int minindex=i;
	 	  for(j=i+1; j<n; j++)
	 	  {
	 	  	if(arr[j]<arr[minindex])
	 	  	{
	 	  		minindex=j;
			   }
		   }
		   
		   temp=arr[i];
		   arr[i]=arr[minindex];
		   arr[minindex]=temp;
	 }
	 printf("After the Selection Sort:");
	  for(i=0;i<n;i++)
	  {
	  	printf("%d ",arr[i]);
	  }
	  return 0;
}
