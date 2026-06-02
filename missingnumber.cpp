#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,5};
    int n=5;
    int totalsum=n*(n+1)/2;
    int arraysum=0;
    for(int i=0;i<n-1;i++)
    {
        arraysum+=arr[i];
    }
    cout<<"Missing number= "<<totalsum-arraysum;
    return 0;
}
