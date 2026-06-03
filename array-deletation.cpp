#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],n,pos;
    cout<<"Enter size of array= ";
    cin>>n;
    cout<<"Enter array elements=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter position= ";
    cin>>pos;
    for(int i=pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    cout<<"Updated array= ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
