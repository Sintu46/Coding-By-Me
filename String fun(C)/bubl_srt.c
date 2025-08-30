#include<stdio.h>
 int main()
 {
 	int i,j,n,temp;
 	int arr[100];
 	 printf("Enter the No of Array Element:");
 	 scanf("%d",&n);
 	 printf("Enter the Array Element : ");
 	 
 	 for(i=0;i<n;i++)
 	 {
 	 	scanf("%d",&arr[i]);
	  }
	  printf("Element before Sorted:");
	  for(i=0;i<n;i++)
	  {
	  	printf("%d ",arr[i]);
	  }
	  
	   for(i=0;i<n-1;i++)
	   {
	   	for(j=0;j<n-1-i;j++)
	   	{
	   		if(arr[j]>arr[j+1])
	   		{
	   			temp=arr[j];
	   			arr[j]=arr[j+1];
	   			arr[j+1]=temp;
			   }
		   }
	   }
	   printf("\nAfter the Bubble Sort:");
	   for(i=0;i<n;i++)
	   {
	   	printf("%d ",arr[i]);
	   }
	  return 0;
 }
