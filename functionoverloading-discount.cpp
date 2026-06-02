#include<bits/stdc++.h>
using namespace std;
double discount(int amount)
{
    return amount*0.10;
}
double discount(int amount,double discount_rate)
{
    return amount*discount_rate/100;
}
int main()
{
    cout<<"10% discount: "<<discount(1000)<<endl;
    cout<<"20% discount: "<<discount(1000,20)<<endl;
    return 0;
}

