#include<iostream>
using namespace std;

class B{
    public:
        void say(){
            cout<<"Hello World"<<endl;
        }

};

class D : public B{
    int a;
    public:
        void say(){
            cout<<"Hello my beautiful people."<<endl;
        }
};

int main()
{
    B b;
    b.say();

    D d;
    d.say();
    return 0;
}