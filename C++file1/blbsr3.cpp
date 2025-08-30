#include<iostream>
using namespace std;
 int main()
 {
 	 int arr[200];
  int n,i,j,temp;
 	cout<<"Enter the array Size:";
 	cin>>n;
 	cout<<"Element of the Array :"<<endl; 
 	  for(i=0;i<n;i++)
 	  {
 	  	cin>>arr[i];	
	   }
  for(i=0;i<=n-1;i++)
	 {
	 	 bool swap=0;
	 	 
 for(j=0;j<=n-i-1;j++)
	{
	          
	    if(arr[j]<arr[j+1])
	    {	
	    	temp=arr[j];
	    	arr[j]=arr[j+1];
	    	arr[j+1]=temp;
	    	swap=1;
	    
			}			 
   	}
   	 if(swap==0)
   	 {
   	 	break;
		}
 }	
	
	 cout<<"Array after the bubble sort:"<<endl;
	 for(i=0;i<n;i++)  
	 {
	 	cout<<" "<<arr[i];
	 }
 }
