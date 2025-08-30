#include<iostream>
#include<vector>
using namespace std;
 struct Node{
    int data;
    Node*left;
    Node*right;
    Node(int val):data(val),left(NULL),right(NULL) {}
 };

 Node* insert(Node*root, int val)
 {
    if(root == NULL)
    {
        return new Node(val);
    }
    if(val < root->data)
    {
         root->left = insert(root->left,val);
     }
     else{
       root->right  = insert(root->right, val);
     }
     return root;
}
 
Node* Buildbst(vector <int> arr)
{
    Node* root = NULL;
    for(int val :arr)
    {
        root =  insert(root, val);
    }
    return root ;
}

int main()
{
    vector <int> arr = { 3,2,1,5,4,6 };
    Node*root = Buildbst(arr);
    cout<<root->data<<" ";
    return 0;
}
    