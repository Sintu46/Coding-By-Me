#include<iostream>
using namespace std;
void traverse(int arr[],int size)
{
      for(int i=0;i<size;i++)
     {
        cout<<arr[i]<<" " ;
       
     }
     cout<<endl;
}
int insert(int arr[], int size,int element ,int pos, int capacity)
 {
         if(size>=capacity)
         {
            return -1;
         }
         else{
            for(int i=size-1;i>=pos; i--)
            {
               arr[i+1]=arr[i];
            }
            arr[pos]= element;
            return 1;
         }
 }
  int delarr(int arr[],int size,int pos)
  {
  for( int i = pos; i < size; i++){
      
           arr[i] = arr[i+1];
          }
  }
int main()
{
    int  arr[]={1,2,3,4,6,7,8,9}; // for insertion arr[100];
     int size =8; 
     // int element=4;
     int pos = 4;
     traverse(arr,size);
     cout<<endl;
   //   size+=1;
   //   insert(arr,size,element,pos,100);
      size-=1;
      delarr(arr,size,pos);
      traverse(arr,size);

    
     cout<<endl;
     return 0;
}