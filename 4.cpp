#include<iostream>
using namespace std;
int main()
{
    float x=455;
    float &y=x;
    cout<<x<<endl;
    cout<<y<<endl;
    int a=41;
    float b=85.21;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<"The value of b is "<<(int)b;
    return 0;
}