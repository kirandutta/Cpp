#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
        Complex(void);
        void printNumber()
        {
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex::Complex(void)
{
    a=10;
    b=2;
}

int main()
{
    Complex c1,c2;
    c1.printNumber();
    c2.printNumber();
    return 0;
}