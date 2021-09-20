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



void levelorder(node*root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        queue<node*> q;
        q.push(root);
        while(!q.empty())
        {
            node *t=q.front();
            cout<<t->data<<" ";
            q.pop();
            if(t->lchild)
            {
                q.push(t->lchild);
            }
            if(t->rchild)
            {
                q.push(t->rchild);
            }
        }
    }
}


int main()
{
    node *root=buildtree();
    levelorder(root);





    return 0;
}
