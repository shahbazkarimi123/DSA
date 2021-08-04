#include<iostream>
using namespace std;

void insert_sort(int arr[], int size)
{
    int key;
    int j=0;
    for(int i=1;i<size;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1]=key;

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



}
