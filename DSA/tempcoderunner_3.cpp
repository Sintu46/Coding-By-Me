#include<iostream>
#include<vector>
using namespace std;
 struct Node{
  int data;
  Node*left; Node*right;
  Node(int val) :data(val),left(NULL),right(NULL) {}
 };
  Node*insert(Node*root, int val)
  {
    if(root == NULL)
    {
      return new Node(val);
    }
    else if(val < root->data)
    {
    root->left = insert(root->left,val);
    }
    else {
     root->right = insert(root->right,val);
    }
    return root;
  }
  Node*bsttree(vector <int> arr)
  {
    Node*root = NULL;
     for(int val : arr)
     {
         root = insert(root,val);
     }
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
   
    Node*getInorderSuccessor(Node*root)
    {
      while(root != NULL && root->left != NULL )
      {
         root = root->left;
      }
      return root;
    }
    Node*delnode(Node*root, int key)
    {
      if(root == NULL)
      {
        return NULL;
      }
      if(key<root->data)
      {
        root->left = delnode(root->left,key) ;
      }
      else if(key > root->data)
      {
     root->right =delnode(root->right,key);
      }
      else{
        if(root->left== NULL)
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
         root->right = delnode(root->right,key); 
        }
      }
      return root;
    }

    int main()
    {
       vector <int> arr = { 1,2,4,3,5,6,7,8};
         Node*root = bsttree(arr);
         cout<<"Before the Deletion :";
         inorder(root);
         cout<<endl;
         cout<<"After the Deletion: ";
         delnode(root,7);
         inorder(root);

    }