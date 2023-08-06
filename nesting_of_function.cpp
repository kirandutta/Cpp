#include<iostream>
#include<string>
using namespace std;

class Binary
{
    private:
        string s;
        void chk_bin(void);
    public:
        void read(void);
        void ones_complement(void);
        void display(void);
};

void Binary :: read(void)
{
    cout<<"Enter a binary code: "<<endl;
    cin>>s;
}

void Binary :: chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"This is incorrect binary format."<<endl;
            exit(0);
        }
    }
}

void Binary :: ones_complement(void)
{
    chk_bin();
    cout<<"Successfully done one's complement operation"<<endl;
     for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0')
            s.at(i)='1';
        else
            s.at(i)='0';
    }
}

void Binary ::display(void)
{
    cout<<"Displaying your binary no:"<<endl;
     for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{
    Binary b;
    b.read();
    b.display();
    b.ones_complement();
    b.display();
return 0;
}