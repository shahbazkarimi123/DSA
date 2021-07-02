#include<iostream>
class Node
{
    public:
        int data;
        Node* next;

        Node(int val)
        {
            data=val;
            next=NULL;
        }
};
void insert_at_head(Node* &head,int val)
{
    Node* n=new Node(val);
    n->next=head;
    head=n;
}
void insert_at_end(Node* &head,int val)
{
    Node* n=new Node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;


}
void display(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }
    std::cout<<std::endl;
}
bool search(Node* &head,int key)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}

int main()
{
    Node* head=NULL;
    insert_at_end(head,9);
    insert_at_end(head,3);
    insert_at_end(head,4);
    display(head);
    insert_at_head(head,5);
    display(head);
    
    std::cout<<search(head,9)<<std::endl;
    std::cout<<search(head,8);

    return 0;
}