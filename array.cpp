#include<iostream>
int main()
{
    int a[50],size,i,num,pos;
    std::cout<<"Enter the size of array: ";
    std::cin>>size;
    for(i=0;i<size;i++)
    {
        std::cout<<"Enter the element:"<<i+1<<" ";
        std::cin>>a[i];
    }
    std::cout<<"Element in array are: ";
    for(i=0;i<size;i++)
    {
        std::cout<<a[i]<<" ";
    }
    //insert number at any position.
    std::cout<<"\nEnter data you want to ensert: ";
    std::cin>>num;
    std::cout<<"Enter the position: ";
    std::cin>>pos;
    if(pos<=0 ||pos>size+1)
    {
        std::cout<<"invelid position";
    }
    else
    {
        for(i=size-1;i>=pos-1;i--)
        {
            a[i+1]=a[i];
        }
        a[pos-1]=num;
        size++;

    }
    //traverse
    for(i=0;i<size;i++)
    {
        std::cout<<a[i];
    }
    //insert at end
    std::cout<<"\nEnter the element at beginning: ";
    for(i=size-1;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    a[0]=num;
    size++;
    for(i=0;i<size;i++)
    {
        std::cout<<a[i];
    }


    
}

