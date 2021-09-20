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


int height(node*root)
{
    if(root==NULL)
    {
        return NULL;
    }
    int l=height(root->lchild);
    int r=height(root->rchild);
    return max(l,r)+1;
}

int daimeter (node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lheight=height(root->lchild);
    int rheight=height(root->rchild);

    int ld=daimeter(root->lchild);
    int rd=daimeter(root->rchild);

    return max(lheight+rheight+1 , max(ld,rd));
//                    ||               ||
//        if it pass through root   if not passes through root

}



int main()
{
    node *root=buildtree();
    int dai=daimeter(root);
    cout<<dai<<"\n";




    return 0;
}
