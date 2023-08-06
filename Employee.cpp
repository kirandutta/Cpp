#include<iostream>
using namespace std;

class Employee
{
    private:
        int a,b,c;
    public:
        int d,e;
        void setdata(int a1,int b1,int c1);
        void getdata()
        {
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void Employee :: setdata(int f,int bg,int h)
{
    a=f;
    b=bg;
    c=h;
}

int main()
{
    Employee subhajit;
    subhajit.d=141;
    subhajit.e=14;
    subhajit.setdata(1,2,3);
    subhajit.getdata();
return 0;
}