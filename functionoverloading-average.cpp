#include<bits/stdc++.h>
using namespace std;
double average(int a,int b)
{
    return (a+b)/2;
}
double average(int a,int b,int c)
{
    return(a+b+c)/3;
}
double average(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    return (double)sum/size;
}
int main()
{
    int arr[]={10,20,30,40,50};
    cout<<"Average of 2 integers= "<<average(10,20)<<endl;
    cout<<"Average of 3 floats= "<<average(2.5f,3.5f,4.5f)<<endl;
    cout<<"Average of array= "<<average(arr,5)<<endl;
    return 0;
}

