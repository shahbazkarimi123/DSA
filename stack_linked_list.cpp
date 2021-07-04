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
Node *top=NULL;

bool isEmpty()
{
    if(top==NULL)
    {
        return true;
    }
    else
        return false;
}
void push(int val)
{
    Node* n=new Node(val);
    n->next=top;
    top=n;
}
void pop(void)
{
    if(isEmpty())
    {
        std::cout<<"Stack is empty";

    }
    else
        {
            Node* n=top;
            top=top->next;
            delete(n);
        }
}
void show(void)
{
    if(isEmpty())
    {
        std::cout<<"Stack is empty";
    }
    else
    {
        std::cout<<top->data;

    }
}
int main()
{
    push(5);
    push(6);
    push(7);
    push(4);
    show();
    pop();
    pop();
    show();
}