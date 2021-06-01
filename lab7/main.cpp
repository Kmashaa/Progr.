#include "class.h"
#include <stdio.h>
using namespace std;

char CheckInput() {
    string ii;
    cin >> ii;
    bool check = false;
    while (!check) 
    { 
        if (ii.length() > 1||ii.length()<1) {
             cout << "Try again";
             cin >> ii;
        }
        else {
            check = true;
        }
    }
    char i = ii[0];
    if (i == '1' || i == '2'||i=='3'||i=='4'||i=='5'||i=='6'||i=='7'||i=='0') {
        return i;
    }
    else {
        cout << "try again";
        CheckInput();
    }
    
    return 0;
}
int main()
{
    List list;
    while (1)
    {
        cout << "AddNode(1), add money(2), All information(3), Payment(4), Transfer(5), receipt(6), balance(7), exit(0)\n";
       
        char i = CheckInput();
        switch (i)
        {
        case '1':
        {
            cout << "Add number,category,passport, balance\n";
            string number; string category; string passport; int balance;
            cin >> number;
            cin >> category;
            cin >> passport;
            cin >> balance;
            list.AddNode(number,category,passport,balance);
            break;
        }
        case '2':
        {
            cout << "Add money(number,more)\n";
            string number; int more;
            cin >> number;
            cin >> more;
           cout<<"Balance of "<<number<<" is "<< list.AddMoney(number, more);
            break;
        }
        case '3': {
            cout << "All information\n";
            list.Information();
            break;
        }
        case '4':
        {
            cout << "Pay (number,less)\n";
            string number; int less;
            cin >> number;
            cin >> less;
            cout << "balance of " << number << " is " << list.Payment(number, less)<<endl;
            break;
        }
        case '5': 
        {
            cout << "transfer money(number1,number2,money)\n";
            string number1, number2;
            int money;
            cin >> number1;
            cin >> number2;
            cin >> money;
            cout<<"Balance of "<<number2<<" is "<<list.Transfer(number1, number2, money);
            break;
        }
        case '6':
        {
            string number;
            cout << "receipt(number)\n";
            cin >> number;
            list.Receipt(number);
            break;
        }
        case '7':
        {
            string number;
            cout << "balance(number)\n";
            cin >> number;
            cout << "balance of " << number << " is " << list.Balance(number); 
            break;
        }
        case '0': 
        {
            exit(0);
            break;
        }
        default:
        {
            i = CheckInput();
            break;
        }

        }
    }
    return 0;
}
