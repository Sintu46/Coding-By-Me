#include <iostream>
#define MAX 5
using namespace std;

class Stack {
    public:
    int stack[MAX];
    int top =-1;



    void push(int val) {
        if (top == MAX - 1) {
            cout << "Stack is OverFlow." << endl;
        } else {
            top++;
            stack[top] = val;
            cout << "Pushed " << val << " in the Stack." << endl;
        }
    }
    void pop() {
        if (top == -1) {
           cout << "Stack is UnderFlow." << endl;
        } else {
            cout << stack[top] << " is popped from the stack." << endl;
            top--;
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack is Empty." <<endl;
        } else {
            cout << "Stack Element :";
            for (int i = top; i >= 0; i--) {
                cout << " " << stack[i];
            }
            cout <<endl;
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.display();
    s.pop();
    s.display();
    return 0;
}