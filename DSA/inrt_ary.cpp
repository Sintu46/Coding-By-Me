#include<iostream>
using namespace std;
 void traverse(int arr[],int n)
 {
 	int  i;
 	for( i=0;i<n;i++)
 	{
 		cout<<arr[i]<<" ";
	 }
	 cout<<endl;
 }
 int  insertelement(int arr[], int element, int size, int idx , int capacity)
 {
  int i;
 	if(size >= capacity)
 	{
 		return -1;
	 }
	 else{
	 	
	 	for(i = size - 1; i >= idx; i--)

       {    
         arr[i+1]=arr[i];
	
		 }	
		 
		 arr[idx] = element; 
		 return 1;	
	 }
	 
 }

 int main()
 {
 	int arr[100]={1,2,3,4,6,7,8,9};
 	int size = 8; 
	int element = 5, idx = 4;
 	 
	  traverse(arr,size);
	  
       size+=1;
 	 insertelement(arr,element, size,idx,100);
 	
 	 
	  traverse(arr,size); 
 
 	 return 0;
 }