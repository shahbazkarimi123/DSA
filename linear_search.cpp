#include<iostream>

using namespace std;
void input(int size,int arr[])
{
    int i;
    for(i=0;i<size;i++)
    {
        cout<<"Enter the element:\t";
        cin>>arr[i];
    }
}
int find_element(int size, int arr[], int check)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==check)
        {
            return (i+1);
        }
    }
    return 0;
}

int main()
{
    int check,size;
    cout<<"enter the size of array: "<<endl;
    cin>>size;
    int arr[size];
    input(size, arr);
    cout<<"Enter the element you want to find: ";
    cin>>check;
    int found_element = find_element(size, arr, check);
    if (found_element)
    {
        cout<<"Element is found at: "<<found_element;
    }
    else
    {
        cout<<"Element is not found: "<<endl;
    }
    


    

}