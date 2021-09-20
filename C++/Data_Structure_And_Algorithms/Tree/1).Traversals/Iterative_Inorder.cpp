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


void iterativeInorder(node *root)
{
    stack<node*> st;
    node *t=NULL;
    while(root!=NULL || !st.empty())
    {
        if(root!=NULL)
        {
            st.push(root);
            root=root->lchild;
        }
        else
        {  
            cout<<root->data<<" ";
            root=st.top();
            st.pop();
            root=root->rchild;
        }
    }


}



int main()
{
    node *root=buildtree();

    iterativeInorder(root);




    return 0;
}
