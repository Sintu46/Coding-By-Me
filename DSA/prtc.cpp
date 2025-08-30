#include<iostream>
#include<vector>
 using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
     Node(int val): data(val),left(NULL),right(NULL){}
};

Node*insert(Node*root , int val)
{
    if(root=NULL)
    {
         return new Node(val);
    }
    if(val<root->data)
    {
        root->left = insert(root->left,val);
    }
    else{
        root->right = insert(root->right,val);
    }
    return root;
}
Node*buildBST(vector <int> arr)
{
    Node*root=NULL;
     for(int val:arr){
        root=insert(root,val);
     }
     return root;
}
bool search(Node*root,int key)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->data==key)
    {
        return true;
    }
    if(key<root->data)
    {
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
    return root;
}

 int main()
 {
    vector <int> arr={3,2,1,5,6,4};
   Node*root =buildBST(arr);
   cout<<search(root,5)<<endl;
   cout<<search(root,8);
   return 0;
 }