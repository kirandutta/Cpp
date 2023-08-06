#include<iostream>
using namespace std;

class Simple{
    int data1,data2,data3;
    public:
        Simple(int a=10,int b=9,int c=8){
            data1=a;
            data2=b;
            data3=c;
        }
        void printData();
};

void Simple::printData()
{
    cout<<"The value of datas are: "<<data1<<","<<data2<<","<<data3<<endl;
}

int main()
{
    Simple s(12);
    s.printData();
    return 0;
}