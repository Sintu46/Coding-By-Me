#include<iostream>
using namespace std;
 int main()
 {
   int a[20],n,i,j;
    cout<<"Enter the Array size :";
	cin>>n;
	 cout<<"Enter the array element:";
	  for(i=0;i<n;i++)
	  {
	  	cin>>a[i];
	  }
		  
		  
	 
	 for(i=n-2;i>=0;i--)
	 {
	 	bool swapped=0;
	 	for(j=0;j<=i;j++)
	 	{
		   if(a[j]>a[j+1])
	 	    {
	 		swapped=1;
		    swap(a[j],a[j+1]);
			 
		      }
	 		
		 }
	 	
		  if(swapped==0)
		  {
		  	break;
		  	
		  }
				} 	
				 cout<<"After bubble sort:" ;
				 for(i=0;i<n;i++)
				 {
				 	cout<<" "<<a[i];
					  }
					  return 0;
 }

