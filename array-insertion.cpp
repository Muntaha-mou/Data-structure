#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],n,pos,value;
    cout<<"Enter size of array= ";
    cin>>n;
    cout<<"Enter array elements= ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter position= ";
    cin>>pos;
    cout<<"Enter value= ";
    cin>>value;
    for(int i=n;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
    n++;
    cout<<"Updated array= ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
