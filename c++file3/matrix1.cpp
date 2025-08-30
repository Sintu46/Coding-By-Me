#include<iostream>
using namespace std;
int main()
 {
int a[3][3],b[3][3],c[3][3]; 	
int i,j;
 cout<<"Element of 1starray :\n";
 
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
  	cout<<"Element of the\t["<<i <<j<<"]\tplace:"; 
  	cin>>a[i][j];
     }	  
  	
  }
 	
 	cout<<"Element of the 2nd Array :\n";
 	
 	 for(i=0;i<3;i++)
 	 {
 	 	for(j=0;j<3;j++)
 	 	
 	 	{
 	 		cout<<"Element of the[" <<i<<j << "]\tplace:" ;
 	 		cin>>b[i][j];
	}
}
	  c[i][j]=a[i][j]+b[i][j];

	   cout<<"\n===============\n";
	   cout<<"\n Sum of two array:\n";
	    cout<<"\n===============\n";
	    for(i=0;i<3;i++)
	    {
	    	for(j=0;j<3;j++)
	    	{
	    		c[i][j]=a[i][j]+b[i][j];
	    		cout<<" "<<c[i][j]<<"\t"<<ends;
			}
			 cout<<endl;
		}
		
 return 0;	
 	
 }
 
