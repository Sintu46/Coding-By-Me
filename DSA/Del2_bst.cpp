#include<iostream>
#include<vector>
using namespace std;
struct Node {
     int data;
     Node* left; Node* right;
      Node(int val) : data(val), left(NULL), right(NULL){}
};
 
Node* Insert(Node* root, int val)
{
    if(root==NULL)
    {
        return new Node(val);
    }
    if(val< root->data){
         root->left  = Insert(root->left, val);
    }
    else{
         root->right = Insert(root->right, val);
    }
    return root;
}
 Node* crtbst(vector <int> arr){
    Node*root =NULL;
    for(int val : arr)
    root = Insert(root, val);
    return root;
 }
 void inorder(Node*root)
 {
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
 Node* getInorderSuccessor( Node*root)
 {
    while(root != NULL && root->left !=NULL)
    {
             root = root->left;
    }
    return root;
         
 }
Node* delnode(Node*root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(key < root->data)
    {
      root->left = delnode(root->left,key);
    }
    else if(key > root->data)
    {
      root->right = delnode(root->right,key);
    }
    else{
        if(root->left==NULL)
        {
            Node*temp=root->right;
            delete  root;
            return temp;
        }
        else if(root->right==NULL){
            Node*temp = root->left;
            delete root;
            return temp;

        }
        else{ 
            Node*Is = getInorderSuccessor(root->right);
            root->data = Is->data;
          root->right = delnode(root->right,key);

        }
    }
}

 int main()
 {
    vector <int> arr = {3,2,1,5,4,6};
Node*root = crtbst(arr);
 cout<<"Before the Deletion:";
  inorder(root);
  cout<<endl;
  delnode(root,6);

  cout<<"After the Delete :";
  inorder(root);
  return 0;
 }