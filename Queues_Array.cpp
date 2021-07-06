#include<iostream>
#define n 20
using namespace std;
class queue
{
    int *arr;
    int front;
    int back;

    public:
        queue()
        {
            arr=new int[n];
            front=-1;
            back=-1;
        }
        ~queue()
        {
            delete []arr;
        }
        void push(int x)
        {
            if(back==n-1)
            {
                cout<<"Queue overflow"<<endl;
                return;
            }
            back++;
            arr[back]=x;
            if(front==-1)
            {
                front++;
            }

        }
        void pop()
        {
            if(front==-1 || front>back)
            {
                cout<<"No elements in queue."<<endl;
                return;

            }
            front++;
        }
        int peek()
        {
            if(front==-1 || front>back)
            {
                cout<<"No elements in queue."<<endl;
                return (-1);
            }

            return arr[front];

        }
        bool isEmpty()
        {
            if(front==-1 || front>back)
            {
                return true;
            }
            return false;
        }
};
int main()
{
    queue q1;
    q1.push(9);
    q1.push(7);
    q1.push(5);
    cout<<q1.peek()<<endl;
    q1.pop();
    cout<<q1.isEmpty()<<endl;
    cout<<q1.peek()<<endl;
    q1.pop();
    cout<<q1.peek()<<endl;
    cout<<q1.isEmpty();
    q1.pop();
    cout<<q1.peek()<<endl;
    cout<<q1.isEmpty();

    return 0;
}
