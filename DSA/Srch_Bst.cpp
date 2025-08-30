#include<iostream>
#include<vector>
using namespace std;
 
 struct Node{
    int data;
    Node*left;
    Node*right;
          Node(int val): data(val),left(NULL),right(NULL){}
 };

 Node* Insert( Node*root, int val)
 {
    if(root == NULL )
    {
        return new Node(val);
    }
    if(val < root->data)
    {
      root->left = Insert(root->left, val);
    }
    else{
      root->right = Insert(root->right, val);
    }
    return root;
 }

 Node*BstTree(vector <int> arr)
 {
        Node*root = NULL;
     for(int val:arr)
     {
       root = Insert(root,val);
       }
       return root;
 }

 bool search(Node*root, int key){
    if(root == NULL)
    {
        return false;
    }
    if(root->data == key)
    {
         return true;
    }
    else if(key < root->data)
    {
        return search(root->left, key);
    }
    else{
        return search(root->right, key);
    }
    return root;
 }
  int main()
  {
    vector <int> arr = { 3,2,1,5,4,6};
     Node*root = BstTree(arr);
     cout<<"Found 6 :"<<" "<<(search(root, 5) ?  "FOUND" : "Not FOUND" )<<endl;
     cout<<"Search 8 :" <<" "<<(search(root,8) ? "FOUND" : "NOT FOUND")<<endl;
     return 0;
  }