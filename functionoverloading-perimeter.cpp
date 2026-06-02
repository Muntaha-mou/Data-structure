#include<bits/stdc++.h>
using namespace std;
const double PI=3.1416;
double perimeter(int radius)
{
    return 2*PI*radius;
}
double perimeter(int length,int width)
{
    return 2*(length+width);
}
float perimeter(float side1,float side2,float side3)
{
    return side1+side2+side3;
}
int main()
{
    cout<<"Circle perimeter: "<<perimeter(7)<<endl;
    cout<<"Rectangle perimeter: "<<perimeter(10,5)<<endl;
    cout<<"Triangle perimeter: "<<perimeter(3.5f,4.5f,5.5f)<<endl;
    return 0;
}


