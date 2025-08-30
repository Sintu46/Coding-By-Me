 #include<iostream>
 #include<vector>
 using namespace std;
 struct Node{
     int data;
     Node*left;
     Node*right;
      Node(int val): data(val),left(nullptr),right(nullptr){} };
      
      static int idx=-1;
      Node*buildtree(vector <int> preorder){
         
         idx++;
         if(preorder[idx] == -1) return NULL;
//If the Current index is out of Bonds then return Nullptr.
         Node* root =new Node(preorder[idx]);//Create A new Node with the Current Value.
         //Recursively build the left and right subtrees.
         //left Subtree
         root->left=buildtree(preorder);
         root->right =buildtree(preorder);//Right Subtrees.
         return root;
      }
 //PRE_ORDER TRAVERSAL IN BINARY SEARCH TREE. 
 void preorderPrint(Node*root)
 {
    if(root==NULL) return ;
     cout<<root->data << " ";
     preorderPrint(root->left);
     preorderPrint(root->right); 
 }

//INORDER TRAVERSAL IN BINARY SEACH TREE.-->only replace inorder from  preorder.
/*
void preorderPrint(Node*root)
 {
    if(root==NULL) return ;
    
    preorderPrint(root->left);  
    cout<<root->data << " "; 
     preorderPrint(root->right); 
 } 
     */
  int main()
  {
     vector <int> preorder={6,5,-1,-1,7,4,-1,-1,8,3,-1,-1,9,-1,-1};
     Node*root=buildtree(preorder);// Build Tree from preorder traversal.
     cout<<root->data <<endl ;
   preorderPrint(root);//Print the tree in PreOrder Traversal.

    cout<< endl;
    return 0;
  }