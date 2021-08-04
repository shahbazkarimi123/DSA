#include<iostream>
using namespace std;
void insert_sort(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void display(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={5,3,9,4,7,0,7,1},size;
    size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<" "<<endl;
    display(arr,size);
    insert_sort(arr,size);
    display(arr,size);


    return 0;
}