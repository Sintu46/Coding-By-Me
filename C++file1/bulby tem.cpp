#include<iostream>
using namespace std;

 template <class A>
   void bubble_sort(A a[],int n)
  {
  	for(int i=0;i<n-1;i++)
  	
  	for(int j=n-1;i<j;j--)
  	if(a[j]<a[j-1])
    swap(a[j],a[j-1]);	
	   	
 }
  
   int main()
   {
   	int a_int[5]={54,23,22,11,19};
   	double a_double[5]={34.2,12.3,44.3,22.34 ,11.3};
   	 int n= 5;
   	 bubble_sort<int>(a_int,5);
   	 cout<<"integer sorted array:";
   	 for( int i=0;i<n;i++)
   	 {
   	 	cout<<a_int[i]<<" ";	
     }
     bubble_sort<double>(a_double,5);
     cout<<"\n double sorted array :";
     for( int i=0;i<n;i++)
     {
     	cout<<a_double[i]<<" ";
	 }
	 return 0;
	 
   }
