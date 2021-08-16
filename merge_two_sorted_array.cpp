#include<iostream>
using namespace std;

void two_way_merge(int arr1[],int arr2[],int arr3[], int m, int n)
{
    int i=0,j=0,k=0;
    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
        }
        else
        {
            arr3[k]=arr2[j];
            j++;
        }
        k++;    
    }
    for(;i<m;i++)
    {
        arr3[k]=arr1[i];
        k++;
    }
    for(;j<n;j++)
    {
        arr3[k]=arr2[j];
        k++;
    }
}
void input(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"  ";
}

int main()
{
    int arr1[]={1,3,5,6,9,13};
    int arr2[]={50,55,62,70,82,90,100,101};
    int arr3[16];
    int m = sizeof(arr1)/ sizeof(arr1[0]);
    int n = sizeof(arr2)/ sizeof(arr2[0]);
    input(arr1,m);
    input(arr2,n);
    two_way_merge(arr1, arr2, arr3, m, n);
    cout<<endl<<endl;
    input(arr3,14);
    two_way_merge(arr1,arr2,arr3,m,n);
    input(arr2,n);

    return 0;
}