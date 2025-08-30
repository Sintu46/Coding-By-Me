#include<iostream>
#include<vector>
using namespace std;
 struct Node{
    int data;                                            
    Node* left;
    Node* right;
     Node (int val) : data(val),left(nullptr),right(nullptr) {} };                         //#include<vecto>
     
     static int idx=-1;
     
     Node*buildtree(vector<int> inorder)
     {    idx++;
        if(inorder[idx]==-1)return nullptr;
     
        Node* root  = new Node(inorder[idx]);
        root->left  = buildtree(inorder);
        root->right = buildtree(inorder);
        return root;                   
     }
     void inorderPrint(Node* root){
        if(root==nullptr)
        {
            return ;
        }
         inorderPrint(root->left);
         cout<<(root->data)<< " ";
         inorderPrint(root->right);
     }
     int main()
     {
        vector <int> inorder={6,5,-1,-1,7,4,-1,-1,8,3,-1,-1,9,-1,-1};
        Node* root=buildtree(inorder);
        cout<<root->data << endl;
        inorderPrint(root);
        cout<<endl;
        return 0;
     }