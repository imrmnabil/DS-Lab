#include<iostream>

using namespace std;

int tree[100] = {1,2,3,4,5};
int lm,rm;

void preorder (int);

void pstorder(int);

void inorder(int);

int leftmost ();

int main()
{
    preorder(0);
    cout<<endl;
    lm = leftmost();
    cout<<lm<<endl;
    pstorder(lm);
    cout<<endl;
    inorder(0);
    cout<<endl;
    return 0;
}

void preorder (int ind)
{
        if(ind>4){
            return;
        }
        cout<<tree[ind];
        preorder(2*ind +1);
        preorder(2*ind +2);
}

void pstorder(int ind)
{
    cout<<tree[ind];
   
    if(ind % 2 == 0)
    {
        return;
    }
    pstorder(2*((ind-1)/2) +2);
    pstorder((ind-1)/2);
}

void inorder(int ind)
{
    if(ind < 5)
    {
    inorder(2*ind + 1); 
    cout<<tree[ind];
    inorder(2*ind +2);
    }
}

int leftmost()
{
    int i = 0;
    while(true)
    {
        if(tree[2*i+1] == '\0')
        {
            break;
        }
        i = 2*i + 1;
    }
    return i;
}

int rightmost()
{
    int i = 0;
    while(true)
    {
        if(tree[2*i+2] == '\0')
        {
            break;
        }
        i = 2*i + 2;
    }
    return i;
}




