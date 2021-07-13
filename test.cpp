#include<iostream>
void insert_arr(int arr[])
{
    std::cout<<"Enter the size of array"<<std::endl;
    int j;
    while(int i=0 < 20)
    {
        std::cout<<"enter the element you wana."<<std::endl;
        std::cin>>j;
        if(j==0)
        {
            j=21;
        }
        arr[i]=j;
    }
}
void traverse()
{

}
int main()
{
    int arr[20];
    std::cout<<"Ente the size of array"std::endl;
    int size;
    std::cin>>size;
    insert_arr(arr,size);
    traverse(int size);
    return 0;
}