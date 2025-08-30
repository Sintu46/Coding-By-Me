#include<iostream>
#include<list>
using namespace std;
 class stack{
    list<int> l;
    public:
         void push(int val)
    {
        l.push_front(val);
       cout<<"Pushed "<<val<<" in the Stack"<<endl;
    }
    void pop()
    {
          l.pop_front();
          
        
    
      }
      int top()
      {
        return l.front();
      }
      bool empty()
      {
        return l.size() == 0;
      }
 };
 int main()
 {
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"After Pushed :";
    while(!s.empty())
    {
        cout<<s.top()<< " ";
         s.pop();
         
    }
    
    cout<<endl;
    return 0;
}
 