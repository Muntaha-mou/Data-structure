#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50};
    int size=5;
    int value=30;
    int low=0,high=size-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==value)
        {
            cout<<"Element found at index:"<<mid<<endl;
            return 0;
        }

        else if(arr[mid]<value)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    cout<<"Element not found"<<endl;
    return 0;
}
