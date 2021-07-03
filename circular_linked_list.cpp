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
void insert_at_starting(Node* &head,int val)
{
    Node* n=new Node(val);
    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }
    
    Node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;

}
void insert_at_end(Node* &head,int val)
{
    if(head==NULL)
    {
        insert_at_starting(head,val);
        return;
    }
    Node* n=new Node(val);
    Node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}
void display(Node* head)
{
    Node* temp=head;
    do
    {
        std::cout<<temp->data<<" ";
        temp=temp->next;
    } while (temp!=head);
    
    while(temp!=head)
    {
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }
    std::cout<<std::endl;

}
int main() 
{
    Node* head=NULL;
    insert_at_end(head,9);
    insert_at_end(head,6);
    insert_at_end(head,3);
    display(head);
    insert_at_starting(head,5);
    display(head);
}