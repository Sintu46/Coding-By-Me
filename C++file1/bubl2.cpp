#include<iostream>
using namespace std;
 int main()
 {
 	 int i,j,n;
 	 int arr[30];
 	  cout<<"Enter the size of array:";
 	   cin>>n;
 	   cout<<"Element of the array:"<<ends;
 	    for(i=0;i<n;i++)
 	    {
 	    	 cin>>arr[i];
		 }
		  for(i=n-2;i<=0;i++)
		  { 
		     bool swapped=0;
		  	for(j=0;j>=i;j++)
		  	{
		  		if(arr[j]>arr[j+1])
		  		 swap(arr[j],arr[j+1]);
		  		  swapped=1;
			  }
			   if(swapped==0)
			   {
			   	break;
			   }
		  }
		   cout<<"Element after the bubble sort:";
		   for(i=0;i<n;i++)
		   {
		   	cout<<arr[i]<<" "<<ends;
		   }
		  return 0;
 }
