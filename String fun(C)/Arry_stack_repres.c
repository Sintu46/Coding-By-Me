#include<stdio.h>
#define MAX 5
int stack[MAX];
int top= -1;
 
 void push( int val)
 {
 	if(top == MAX - 1)
 	{
 		printf("Stack is OverFlow.");
	 }
	 else
	 {
	 	top++;
	 	stack[top]= val;
	 	
	 	printf("Pushed %d  in the Stack. ",val);
	 	printf("\n");
		
	 }
 }
 void pop()
 {
 	if(top == -1){
 		printf("Stack is UnderFlow.");
	 }
	 else
	 {
	 	printf(" %d  is popped from the stack.",stack[top]);
	 	printf("\n");
		top--;
	 }
 }
 void display()
 {
 	
 	if(top == -1){
 		printf("Stack is Empty.");
	 }
	 else{
	 	printf("Stack Element :");
	 	
	 	for( int i = top; i >= 0; i--)
	 	{
	 		printf(" %d ",stack[i]);
		 }
		 printf("\n");
	 }
 }
  int main()
  {
  	push(10);
  	push(20);
  	push(30);
  	push(40);
  	display();
  	pop();
  	display();
	return 0;
  }
