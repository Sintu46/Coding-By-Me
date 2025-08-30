#include<stdio.h>
int main()
{
	int i,j,n,temp;
	int arr[100];
	printf("Enter the  No of Array Element:");
	scanf("%d",&n);
	printf("Enter the Array:");
	
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&arr[i]);
	 }
	 
	 for(i=0;i<n-1;i++)
	 {
	 	int smallestindex=i;
	 	
	 		for(j=i+1;j<n;j++)
	 		{
	 			if(arr[j] < arr[smallestindex])
	 			{
	 			    smallestindex=j;	
				 }
	 				
			 }
			     temp=arr[i];
			     arr[i]= arr[smallestindex];
	 		  	 arr[smallestindex]=temp;
			 
		 }
	 printf("After the Selection sort:");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d ",arr[i]);
	 }
	 return 0 ;
}
