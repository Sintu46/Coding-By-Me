#include<iostream>
using namespace std;
void search(int arr[], int size , int element)
{
    for( int i = 0;  i < size; i++)
    {
        if(arr[i]==element)
        { 
           cout<<"Element " << element <<" is found at " << i+1 << " Position in the Give array."<<endl;
           return ;
        }
        
    } 
         cout<<"Element "<<element<<" is NotFound in the Given Array.";
            
        
}
int main()
{
    int arr[]={2,43,5,62,4,55,78,55,33,88,6,7,66,};
    int size= sizeof(arr)/sizeof(arr[0]);;
    search(arr,size,55);
    return 0;

}