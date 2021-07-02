#include<iostream>
class Node
{
    public:
        int data;
        Node* next;
        Node* previous;

        Node(int val)
        {
            data=val;
            next=NULL;
            previous=NULL;
        }
};
void insert_at_head(Node* &head,int val)
{
    Node* n=new Node(val);
    n->next=head;
    if(head!=NULL)
    {
        head->previous=n;
    }
    
    head=n;
}
void insert_at_tail(Node* &head,int val)
{
    if(head==NULL)
    {
        insert_at_head(head,val);
        return;
    }
    Node* n=new Node(val);
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->previous=temp;

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
int main()
{
    Node* head=NULL;
    insert_at_tail(head,9);
    insert_at_tail(head,2);
    insert_at_tail(head,5);
    display(head);
    insert_at_head(head,1);
    display(head);
    return 0;
}