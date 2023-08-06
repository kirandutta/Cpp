#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string s;
    ifstream in("sample1.txt");
    in>>s;
    getline(in,s);
    cout<<s;
    return 0; 
}