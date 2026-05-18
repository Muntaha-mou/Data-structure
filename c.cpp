#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[]={10,20,30,40,50};
int n=5;
int value=60;
for(int i=0;i<n;i++)
{
if(a[i]==value)
{
cout<<"Found at index="<<i<<endl;
return 0;
}
}
cout<<"Element not found"<<endl;
return 0;
}

