#include<iostream>
using namespace std;
int choice,stack[10],top,element;
void menu(void);
void pop(void);
void push(void);
void show_element(void);
int main()
{
    choice=element=1;
    top=0;
    menu();
}
void menu(void)
{
    cout<<"\nEnter one of the following options:\n";
    cout<<"PUSH 1\nPOP 2\nSHOW ELEMENTS 3\nEXIT 4\n";
    cin>>choice;
    if(choice==1)
    {
        push();menu();
    }
    if(choice==2)
    {
        pop();
        menu();
    }
    if(choice==3)
    {
        show_element();
        menu();
    }
}
void push(void)
{
    if(top<=9)
    {
        cout<<"Enter the element to be pushed to stack:\n";
        cin>>element;
        stack[top]=element;
        ++top;
    }
    else
    {
        cout<<"Stack is full\n";

    }
    return;
}
void pop()
{
    if(top>0)
    {
        --top;
        element=stack[top];
        cout<<"Popped element:"<<element<<endl;
    }
    else
    {
        cout<<"Stack is empty:\n";
    }
    return;
}
void show_element()
{
    if(top==0)
    {
        cout<<"Stack is empty";

    }
    else
    {
        for(int i=0;i<top;i++)
        {
            cout<<stack[i];
        }
    }
}