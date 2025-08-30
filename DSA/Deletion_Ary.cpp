#include<iostream>
using namespace std;

 void traverse( int arr[], int n)
{
     for( int i=0; i<n; i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;

}
void delelement(int arr[],int size, int indx)
{
    for(int i = indx; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
}

 int main()
 {
    int arr[]={1,2,3,4,5,6,7,8,9,11,22,33,14,53,25,45};
    int size=sizeof(arr)/sizeof(arr[0]), indx=8;
    cout<<"Before The Deletion: ";
    traverse(arr,size);
    cout<<endl;
cout<<"After the Deletion: ";
    size-=1;
    delelement(arr,size,indx);
    traverse(arr,size);
    return 0;
 }