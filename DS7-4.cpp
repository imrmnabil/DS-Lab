#include<iostream>

using namespace std;

char tree[100] = {'A','B','C','D','E','F','G','H','\0','\0','\0','I','\0','\0','J'};
int lm,rm;

void preorder (int);

void inorder(int);

int main()
{
    preorder(0);
    cout<<endl;
    inorder(0);
    cout<<endl;
    return 0;
}

void preorder (int ind)
{
        if(ind>14){
            return;
        }
        cout<<tree[ind];
        preorder(2*ind +1);
        preorder(2*ind +2);
}


void inorder(int ind)
{
    if(ind < 15)
    {
    inorder(2*ind + 1); 
    cout<<tree[ind];
    inorder(2*ind +2);
    }
}
