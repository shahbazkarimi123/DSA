#include<iostream>
using namespace std;
class Node
{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val)
        {
            data=val;
            left=NULL;
            right=NULL;
        }
};
Node* insert_bst(Node* root,int val)
{
    if(root==NULL)
    {
        return (new Node(val));
    }
    if(root->data>val)
    {
        root->left=insert_bst(root->left,val);

    }
    else
    {
        root->right=insert_bst(root->right,val);
    }
    return root;

}
Node* search_in_BST(Node* root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==key)
    {
        return root;
    }
    if(root->data>key)
    {
        return (search_in_BST(root->left,key));
    }
    return search_in_BST(root->right,key);
}
void inorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    Node* root=NULL;
    int size,element;
    int i=0;
    cout<<"Enter the size of BST."<<endl;
    cin>>size;
    while(i<=size)
    {
        cout<<"\nEnter the element";
        cin>>element;
        root=insert_bst(root,element);
        i++;
    }
    inorder(root);
}
int main()
{
    Node* root=NULL;
    insert_bst(root,5);
    insert_bst(root,6);
    insert_bst(root,4);
    insert_bst(root,8);
    insert_bst(root,1);
    inorder(root);
    
}