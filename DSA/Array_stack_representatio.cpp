#include<iostream>
#define MAX 5
using namespace std;
class stack{
    public:
    int stack[MAX];
    int top=-1;

 void push(int val)
 {
    if(top == MAX - 1)
    {
     cout<<"Stack OverFlow.";

    }
    else{
        top++;
        stack[top] = val;
       cout<<"Pushed " <<val<<" at the Stack"<<endl;
    }
 }
  void pop()
  {
    if(top == -1)
    {
    
        cout<<"Stack UnderFlow.";
    }
    else{
        cout<<"Popped"<<" " <<stack[top]<<" " <<"from the Stack"<<endl;
        top--;
    }
  }
  void display(){
    if(top == -1)
    {
        cout<<"Stack UnderFlow.";
    }
    else{
        cout<<"Element are:";
        for(int i=top; i>=0; i--)
        {
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
  }
};
 int main()
 { stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50 );
    s.display();
    s.pop();
    s.display();
    return 0;
 }