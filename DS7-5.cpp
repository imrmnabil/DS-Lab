#include<iostream>
#include<stack>

using namespace std;

struct Node
{
    char data;
    Node * left;
    Node * right;

    Node(char data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }

};

void inorder(struct Node *);


int main()
{
    struct Node * root;
    root = new Node('A');
    root->left = new Node('B');
    root->right = new Node('C');
    root->left->left =new Node('D');
    root->left->right =new Node('E');
    root->right->left =new Node('F');
    root->right->right =new Node('G');
    root->left->left->left =new Node('H');
    root->right->left->left =new Node('I');
    inorder(root);
}

void inorder(struct Node * root){
    stack <Node *> stk;
    Node  * temp = root;
    while(temp != NULL || stk.empty() == false)
    {
        while(temp != NULL) {
            stk.push(temp);
            temp = temp -> left;
        }
        temp = stk.top();
        stk.pop();
        cout<<temp->data<<" ";
        temp = temp->right;
    }

}