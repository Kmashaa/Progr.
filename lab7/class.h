#ifndef CLASS_H
#define CLASS_H
#include <iostream>
using namespace std;

class Depositor 
{
    public: 
      string number, category, passport;
      int balance;
      Depositor() {};
};

class Node
    {
    public:
         Node* pNext;
         Depositor data;
         Node() {};
         Node(string number, string category, string passport, int balance, Node* pNext = nullptr);
};


class List
{
public:
    
    List();
    int AddNode(string number, string category, string passport, int balance);
    int AddMoney(string number, int more);
    int Payment(string number, int less);
    int Transfer(string number1, string number2, int money);
    int Balance(string number);
    int Receipt(string number);
    int Information();
    ~List();
private:
    Node* head;
};
#endif