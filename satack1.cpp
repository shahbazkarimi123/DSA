#include<iostream>
class StackArray
{
    private:
        int data;
        int top;
        int size;
        int stack[10];
    public:
        StackArray()
        {
            top-1;
        }
        bool isEmpty(void);
        void push(int val);
        void peek();

};
bool StackArray::isEmpty()
{
    if(top==-1)
    {
        return true;
    }
    else
        return false;
}
void StackArray::push(int n)
{
    if(isEmpty()!=true)
    {
        top++;
        stack[top]=n;
    }
    else
        {
            std::cout<<"\nStack is full";

        }

}
void StackArray::peek()
{
    std::cout<<stack[top];
}
int main()
{
    StackArray s1;
    s1.isEmpty();
    s1.push(5);
    s1.isEmpty();
    s1.peek();
    s1.push(9);
    s1.push(7);
    s1.peek();
    return 0;
}