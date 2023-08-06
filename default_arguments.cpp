#include <iostream>
using namespace std;
float moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

int main()
{
    int money = 100000;
    cout << "If you have " << money << " Rs in your bank account, you will receive " << moneyReceived(money) << " Rs after 1 year" << endl;
    cout << "For VIP:If you have " << money << " Rs in your bank account, you will receive " << moneyReceived(money, 1.09) << " Rs after 1 year" << endl;
    return 0;
}