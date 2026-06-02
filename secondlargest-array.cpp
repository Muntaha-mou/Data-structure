#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={12,23,34,28,15,38};
    int n=6;
    int largest=INT_MIN;
    int secondLargest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            secondLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondLargest&&arr[i]!=largest)
        {
            secondLargest=arr[i];
        }
    }
    cout<<"Second largest="<<secondLargest<<endl;

    return 0;
}
