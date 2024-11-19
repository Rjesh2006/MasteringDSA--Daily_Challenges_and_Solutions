#include <iostream>
#include <queue>
using namespace std;

class Binary_tree {
public:
    struct Node {
        int data;
        Node* left;
        Node* right;

        Node(int value) {
            data = value;
            left = nullptr;
            right = nullptr;
        }
    };

    Node* root;

public:
    Binary_tree() {
        root = nullptr;
    }


 // Function for tree insertion
    void insertion(int value) {
        Node* newnode = new Node(value);

        if (root == nullptr) {
            root = newnode;
            return;
        }

        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            Node* current_Node = q.front();
            q.pop();

            if (current_Node->left == nullptr) {
                current_Node->left = newnode;
                break;
            } else {
                q.push(current_Node->left);
            }

            if (current_Node->right == nullptr) {
                current_Node->right = newnode;
                break;
            } else {
                q.push(current_Node->right);
            }
        }
    }

    void perform_inorder_traversal() {
        inorder_traversal_helper(root);
        cout << endl;
    }



    void inorder_traversal_helper(Node* root) {
        if (root == nullptr) {
            return;
        }

        inorder_traversal_helper(root->left);
        cout << root->data << " ";
        inorder_traversal_helper(root->right);
    }


    void display_like_a_tree(Node* node, int space = 0, int count = 5) {
        if (node == nullptr) return;

        space += count;

        display_like_a_tree(node->right, space);

        cout << endl;
        for (int i = count; i < space; i++) {
            cout << " ";
        }
        cout << node->data << "\n";

        display_like_a_tree(node->left, space);
    }

    void tree_performer() {
        display_like_a_tree(root);
    }
};



int main() {
    Binary_tree tree;
    tree.insertion(2);
    tree.insertion(3);
    tree.insertion(4);
    tree.insertion(66);
    tree.insertion(7);
    tree.insertion(8);
    tree.insertion(43);

    cout << "Iorder traversal of the binary tree here--> : ";
    tree.tree_performer();

    return 0;
}
