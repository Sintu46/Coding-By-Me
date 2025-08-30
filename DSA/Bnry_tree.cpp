#include<iostream>
#include <vector>
using namespace std;
class Node{
	public:
		int data;
		Node*left;
		Node*right;
		
		Node(int val)
		{
			data=val;
			left=right=NULL;
		}		

};
static int idx = -1;
 Node*buildtree(vector <int> preorder)
{
        idx++;
        if(preorder[idx] == -1){
        	return NULL;
		}
	Node*root= new Node(preorder[idx]);
	root->left  = buildtree(preorder); //Left
	root->right = buildtree(preorder); //Right
	return root;	
}
//Preorder Traversal in Binary Search Tree.
 void preorderPrint(Node* root)
 {
 	if(root==NULL)
 	{
 		return;
	 }
	 
	cout<<root->data <<" ";
	preorderPrint(root->left);
	preorderPrint(root->right);
 }
 int main()
 {
 vector <int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
 	Node*root = buildtree(preorder);
// 	cout << root->data << endl;
// 	cout << root->left -> data  <<  endl;
// 	cout << root->right->data << endl;
  
 preorderPrint(root);

    cout << endl;
 	return 0;
 }
 // output:root=1,left=2,right=3;

