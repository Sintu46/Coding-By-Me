#include<iostream>
#include<vector>
using namespace std;
 struct Node{
    int data;
    Node*left;Node*right;
    Node(int val):data(val),left(NULL),right(NULL){}
 };

  Node*insert(Node*root,int val)
  {
    if(root==NULL)
    {
        return new Node(val);
    }
    if(val<root->data)
    {
        root->left= insert(root->left,val);
    }
    else{
        root->right=insert(root->right,val);
    }
    return root;

  }
 Node*buildbst(vector <int> arr)
 {
   Node* root = NULL;
   for(int val:arr){
    root= insert(root,val);
   }
   return root;   
}
// bool search(Node*root,int key)
//  {
//     if(root==NULL)
//     {
//         return false;
//     }
//     if(root->data==key)
//     {
//         return true;
//     }
//      if(key<root->data)
//      {
//         return search(root->left,key);
//      }
//      else{
//         return search(root->right,key);
//      }
//      return root;
//  }

 void inorderPrint(Node*root)
  {
    if(root==NULL) return;
    inorderPrint(root->left);
    cout<<root->data<<" ";
     inorderPrint(root->right);
  }
 Node*getInorderSuccessor(Node*root){
    while(root!=NULL && root->left !=NULL)
    {
        root =root->left;
    }
    return root;
 }
 
 Node*delnode(Node* root, int key)
 {
    if(root == NULL)
    {
        return NULL;
    }
    if(key < root->data)
    {
       root->left = delnode(root->left, key);
    }
    else if(key > root->data) 
    { 
        root->right = delnode(root->right, key);
    }
    else{
        if(root->left == NULL)
        {
            Node*temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL)
        {
            Node*temp = root->left;
            delete root;
            return temp;
        }
        else{
            Node* Is = getInorderSuccessor(root->right);
            root->data = Is->data;
            root->right = delnode(root->right, Is->data);
        }
    }
    return root;
 }
 
  int main()
  {
    vector <int> arr = {3,2,1,5,4,6};
    Node*root = buildbst(arr);
   // cout << "Search 6: " << (search(root, 6) ? "Found" : "Not Found") << endl;

    cout<<"Before :";
    inorderPrint(root);
    cout<<endl;

    root = delnode(root,6);
   
    cout<<"After :";
    inorderPrint(root);
    cout<<endl;

     return 0;
  }