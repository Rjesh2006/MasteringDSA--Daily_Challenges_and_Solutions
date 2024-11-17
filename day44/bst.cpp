#include<iostream>
using namespace std;

class Treenode{
    public:
    int data;
    Treenode  *left;
    Treenode  *right;
    

Treenode(int data1){
    data= data1;
    left=nullptr;
    right=nullptr;
}
};

Treenode* insert(Treenode * root,int value){
      if(root==NULL)return new Treenode(value);
      

      if (value<root->data)
      {
      root->left= insert(root->left,value);
      }
      else if(value>root->data){
           root->right= insert(root->right,value);
      }

      return root;
}


void display_treenodes_inorder_way(Treenode *Root){
         if (Root==NULL)
         {
            return ;
         }

       display_treenodes_inorder_way(Root->left);
       cout<<Root->data<<"----->";
       display_treenodes_inorder_way(Root->right);



         
}


int main(){
    Treenode *root=nullptr;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);
        cout << "Inorder Traversal of the BST: ";
display_treenodes_inorder_way(root);

    return 0;


}
