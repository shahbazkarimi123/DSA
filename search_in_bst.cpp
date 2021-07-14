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

Node* insertBST(Node* root, int val)
{
    if(root==NULL)
    {
        return (new Node(val));
    }
    if(val<root->data)
    {
        root->left=insertBST(root->left,val);
    }
    else
    {
        root->right=insertBST(root->right,val);
    }
    return root;
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
//binary search
Node* searchInBST(Node* root,int key)
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
        return searchInBST(root->left,key);
    }
    return searchInBST(root->right,key);
}

int main()
{
    Node* root=NULL;
    root=insertBST(root,5);
    insertBST(root,4);
    insertBST(root,1);
    insertBST(root,9);
    insertBST(root,3);
    insertBST(root,8);
    inorder(root);
    if(searchInBST(root,9)==NULL)
    {
        cout<<"\nKey does not exist"<<endl;
    }
    else
    {
        cout<<"\nKey "<<root->data<<" exists";
    }

    return 0;

    


}