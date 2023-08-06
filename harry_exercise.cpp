#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
    int a,b;
    public:
        void getDataSimple()
        {
            cout<<"Enter the value of a and b: "<<endl;
            cin>>a>>b;
        }
        void performOperationSimple()
        {
            cout<<"The value of a+b is: "<<a+b<<endl;
            cout<<"The value of a-b is: "<<a-b<<endl;
            cout<<"The value of a*b is: "<<a*b<<endl;
            cout<<"The value of a/b is: "<<a/b<<endl;
        }
};

class ScientificCalculator{
    int a,b;
    public:
        void getDataScientific()
        {
            cout<<"Enter the value of a and b: "<<endl;
            cin>>a>>b;
        }
        void performOperationScientific()
        {
            cout<<"The value of cos(a) and cos(b) is :"<<cos(a)<<" "<<cos(b)<<endl;
            cout<<"The value of sin(a) and sin(b) is :"<<sin(a)<<" "<<sin(b)<<endl;
            cout<<"The value of exp(a) and exp(b) is :"<<exp(a)<<" "<<exp(b)<<endl;
            cout<<"The value of tan(a) and tan(b) is :"<<tan(a)<<" "<<tan(b)<<endl;
            
        }
};

class HybridCalculator:public SimpleCalculator,public ScientificCalculator{

};

int main()
{
    HybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationScientific();
    calc.getDataSimple();
    calc.performOperationSimple();
return 0;
}