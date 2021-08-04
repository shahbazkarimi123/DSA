#include<iostream>
using namespace std;
void input(int size, int arr[])
{
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element: ";
        cin>>arr[i];

    }
}
void find_element(int size, int arr[], int num)
{
    int first=0,last,mid;
    
    do
    {
        mid=(first,last)/2;
        if(arr[mid]==num)
        {
            cout<<"Found at location: "<<mid+1;
            break;
        }
        else if(arr[mid]<num)
            first=mid+1;
        else
        {
            last = mid-1;

        }      
    }
    while(first<=last);
}
    
    


int main()
{
    int size,num;
    cout<<"Enter the size of element: ";
    cin>>size;
    int arr[size];
    input(size,arr);
    cout<<"Enter the number you want to find: ";
    cin>>num;
    find_element(size, arr, num);
    if(find_element)
    {
        cout<<find_element;
    }
    else
    {
        cout<<"Number is not found";
    }
    return 0;
}