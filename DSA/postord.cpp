#include<iostream>
#include<vector>
using namespace std;
struct Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val ): data(val),left(NULL),right(NULL){}
};

static int idex=-1;
 Node* buildtree(vector <int> postorder)
 {
    idex++;
    if(postorder[idex] == -1) return NULL;
    Node* root= new Node(postorder[idex]);
    root->left  = buildtree(postorder);
    root->right = buildtree(postorder);
    return root;
 }
  void postPrint(Node*root){
    if(root==NULL)return ;
    postPrint(root->left);
    postPrint(root->right);
    cout<<root->data <<" ";
  }
  int main()
  {
    vector <int> postorder={6,5,-1,-1,7,4,-1,-1,8,3,-1,-1,9,-1,-1};
    Node* root= buildtree(postorder);
    postPrint(root);
    cout<< endl;
    // cout<<root->data<< " "   << endl;
    // cout<<root->left->data   << " "<< endl;
    // cout<<root->right->data  << " " << endl;
  }