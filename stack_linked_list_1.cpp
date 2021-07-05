#include<iostream>
class Node
{
    public:
        int data;
        Node *next;

        Node(int data)
        {
            this->data=data;
            next=NULL;
        }
};
class Stack
{
    Node *head;
    int size;
    public:
        Stack()
        {
            head=NULL;
            size=0;

        }
        int getSize()
        {
            return size;
        }
        bool isEmpty()
        {
            return size==0;
        }
        void push(int element)
        {
            Node *n=new Node(element);
            n->next=head;
            head=n;
            size++;
        }
        int pop()
        {
            int x=head->data;
            Node *temp=head;
            head=head->next;
            delete temp;
            size--;
            return x;
        }
        int top()
        {
            if(isEmpty())
                return 0;
            return head->data;
        }
};
int main()
{
    Stack s1;
    std::cout<<s1.isEmpty()<<std::endl;
    s1.push(8);
    std::cout<<s1.isEmpty()<<std::endl;
    std::cout<<s1.getSize()<<std::endl;
    s1.push(5);
    std::cout<<s1.top();
}