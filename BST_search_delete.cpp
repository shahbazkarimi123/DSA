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
Node* inorder_Succ(Node* root)
{
    Node* curr=root;
    while(curr && curr->left != NULL)
    {
        curr=curr->left;   
    }
    return curr;
}

Node* deleteInBST(Node* root,int key)
{
    if(root->data>key)
    {
        root->left=deleteInBST(root->left,key);
    }
    else if(root->data<key)
    {
        root->right=deleteInBST(root->right,key);
    }
    else
    {
        if(root->left == NULL)
        {
            Node* temp =root->right;
            free(root);
            return temp;
        }
        else if(root->left==NULL)
        {
            Node* temp=root->left;
            free(root);
            return temp;
        }
        Node* temp = inorder_Succ(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right,temp->data);

    }
    return root;
    
}

int main()
{
    Node* root=NULL;
    int size,element;
    int i=0,z;
    cout<<"Enter the size of BST."<<endl;
    cin>>size;
    while(i<size)
    {
        cout<<"\nEnter the element ";
        cin>>element;
        root=insert_bst(root,element);
        i++;
    }
    inorder(root);
    cout<<"\nFind your number ";
    cin>>z;
    if(search_in_BST(root,z)==NULL)
    {
        cout<<z<<"\n is not found"<<endl;
    }
    else
    {
        cout<<z<<" is found."<<endl;
    }
    deleteInBST(root,5);
    inorder(root);


}
