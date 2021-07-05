#include<iostream>
using namespace std;
class twoStacks
{
    public:
        private:
            int* arr;
            int size;
            int top1,top2;

        public:
            twoStacks(int n)
            {
                size=n;
                arr=new int[n];
                top1=-1;
                top2=size;

            }
            void push1(int x)
            {
                if(top1<top2-1)
                {
                    top1++;
                    arr[top1]=x;
                }
                else
                {
                    cout<<"STack Overflow";
                    exit(1);
                }
            }
            void push2(int x)
            {
                if(top1<top2)
                {
                    top2--;
                    arr[top2]=x;
                }
                else
                {
                    cout<<"Stack Overflow";
                    exit(1);
                }
            }
            int pop1()
            {
                if(top1>=0)
                {
                    int x=arr[top1];
                    top1--;
                    return x;
                }
                else
                    {
                        cout<<"Stack Overflow";
                        exit(1);
                    }
            }
            int pop2()
            {
                if(top2<size)
                {
                    int x=arr[top2];
                    top2++;
                    return x;
                }
                else
                    {
                        cout<<"Stack overflow";
                        exit(1);
                    }
            }

            


};
int main()
{
    twoStacks* ts(5);
    ts->push1(5);
    ts->push2(7);
    ts->push2(8);
    ts->push1(3);
    cout<<"Popped element from stack 1 is "<<ts->pop1();
    ts->push2(1);
    cout<<"\n Popped element form stack 2 is "<<ts->pop2();
    return 0;


}
