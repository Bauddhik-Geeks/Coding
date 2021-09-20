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
        cout<<"Enter Lchild of :  \t"<<root->data;
        root->lchild=buildtree();
        cout<<"Enter Rchild of : \t"<<root->data;
        root->rchild=buildtree();
        return root;
    }
}


        	// Preorder_order root is send and printing it's LEVELORDER


void preorder(node*root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        cout<<root->data<<" ";
        preorder(root->lchild);
        preorder(root->rchild);

    }
}

        // Inorder_order root is send and printing it's LEVELORDER



void inorder(node *root)
{
    if(root==NULL) return;
    else
    {
        inorder(root->lchild);
        cout<<root->data<<" ";
        inorder(root->rchild);
    }
}

    
		// Post_order root is send and printing it's LEVELORDER



void postorder(node* root)
{
    if(root==NULL)return;
    else
    {
        postorder(root->lchild);
        postorder(root->rchild);
        cout<<root->data<<" ";
    }
}



	// Level_order: root is send and printing it's LEVELORDER



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

    	// counting no of nodes in a tree

int count(node *root)
{
    if(root!=NULL)
    {
        int x=count(root->lchild);
        int y=count(root->rchild);
        return x+y+1;
    }
    return 0;
}

        	//Counting leaf nodes in it

int countleafnode(node*root)
{
    if(root!=NULL)
    {
        int x=countleafnode(root->lchild);
        int y=countleafnode(root->rchild);
        if(root->lchild==NULL && root->rchild==NULL)
        {
            return x+y+1;
        }
        else
        {
            return x+y;
        }
    }
    return 0;
}

		//Height of tree


int height(node *root)
{
    if(root!=NULL)
    {
        int x=height(root->lchild);
        int y=height(root->rchild);
        return max(x,y)+1;
    }
    return 0;
}
            
            
            // Counting nodes of two degree by checking if both are null or not

int countnodesoftwodegree(node*root)
{
   if(root!=NULL)
   {
    int x=countnodesoftwodegree(root->lchild);
    int y=countnodesoftwodegree(root->rchild);
    
    if(root->rchild!=NULL && root->lchild!=NULL)
    {
        return x+y+1;    
    }
    else
    {
        return x+y;
    }
    }
    return 0;
}

	//Counting nodes of one degree 

int countnodesofonedegree(node*root)
{
 if(root!=NULL)
 {
     int x=countnodesofonedegree(root->lchild);
     int y=countnodesofonedegree(root->rchild);
     if((root->lchild!=NULL && root->rchild==NULL)||(root->rchild!=NULL&&root->lchild==NULL))
     {
         return x+y+1;
     }
     else
     {
         return x+y;
     }
 }   
 return 0;
}





int main()
{
    node *root=buildtree();
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
     cout<<endl;
    levelorder(root);
    int x=count(root);
    cout<<"counted roots"<<x<<endl;
    cout<<"Node with one degree "<< countnodesofonedegree(root)<<endl;
    cout<<"HEight = "<<height(root)<<endl;
    cout<<"NODE with 2 degree"<<countnodesoftwodegree(root)<<endl;
    cout<<"LEAF Nodes = "<<countleafnode(root)<<endl;
	
	
	
	
    return 0;
}
