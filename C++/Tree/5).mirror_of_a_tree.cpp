#include<bits/stdc++.h>

using namespace std;

class node
{
    public:
        int data;
        node *lchild;
        node *rchild;
        node(int d)
        {
            data=d;
            lchild=NULL;
            rchild=NULL;
        }
};

// Node return Type of pointer 
node *buildtree()        //will  return root node pointer 
{
    int d;
    // cout<<"Enter Node Data"<<endl;
    cin>>d;
    if(d==-1)
    {
        return NULL;
    }
    else    
    {
        node *root=new node(d);
        cout<<"Enter Lchild of :  \t"<<root->data<<"\t";
        root->lchild=buildtree();
        cout<<"Enter Rchild of :  \t"<<root->data<<"\t";
        root->rchild=buildtree();
        return root;
    }
}

void inorder(node*root)
{
    if(root!=NULL)
    {
        inorder(root->lchild);
        cout<<root->data<<" ";
        inorder(root->rchild);
    }
    return ;
}

void mirror(node * root)
{
    if(root!=NULL)
    {
        mirror(root->lchild);
        mirror(root->rchild);

        node *temp=root->lchild;
        root->lchild=root->rchild;
        root->rchild=temp;
    }
    return;
}



int main()
{
    node *root=buildtree();
    inorder(root);
    mirror(root);
    inorder(root);





    return 0;
}
