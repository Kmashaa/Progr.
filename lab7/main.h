#pragma once
#include <iostream>
#include <string>
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


List::List()
{
    head = nullptr;
}
List::~List()
{
}


int List::Transfer(string number1, string number2, int money) {
    Node* temp1 = nullptr;
    Node* temp = nullptr;
    Node* temp2 = nullptr;
    temp = head;
    while (temp != nullptr)
    {
        if (temp->data.number == number1)
        {
            temp1 = temp;
        }
        else if (temp->data.number == number2) 
        {
            temp2 = temp;
        }
        temp = temp->pNext;
        
    }
    if(temp1!=nullptr&&temp2!=nullptr)
    {
    temp1->data.balance -= money;
    temp2->data.balance += money;
    }
    else if(temp1==nullptr){
        return 1;
    }
    else if(temp2==nullptr){
        return 2;
    }
    return temp2->data.balance;
}
int List::Payment(string number, int less)
{
    Node* temp = new Node;
    temp = head;
    while (temp != nullptr)
    {
        if (temp->data.number == number)
        {
            temp->data.balance -= less;
            return temp->data.balance;
        }
        temp = temp->pNext;
    }
    return 0;
}

int List::Receipt(string number) 
{
    Node* temp = new Node;
    temp = head;
    while (temp!=nullptr)
    {
        if (temp->data.number == number) 
        {
            cout << "Account number: " << temp->data.number << "\n";
            cout << "Contribution category: " << temp->data.category << "\n";
            cout << "Passport data" << temp->data.passport << "\n";
            cout << "Balance: " << temp->data.balance << "\n";
        }
        temp = temp->pNext;
    }
    return 0;

}
int List::Information() 
{
    Node* temp = new Node;
    temp = head;
    while (temp != nullptr)
    {
        cout << temp->data.number<<"\n";
        cout << temp->data.category << "\n";
        cout << temp->data.passport << "\n";
        cout << temp->data.balance << "\n";
        temp = temp->pNext;
    }
    return 0;
}
int List::AddMoney(string number,int more)
{
    Node* temp = new Node;
    temp = head;
    while (temp != nullptr)
    {
        if (temp->data.number == number)
        {
            temp->data.balance += more;
            return temp->data.balance;
        }
        temp = temp->pNext;
    }
    return 0;
}

int List::Balance(string number)
{
    Node* temp = new Node;
    temp = head;
    while (temp != nullptr)
    {
        if (temp->data.number == number)
        {
            return temp->data.balance;
        }
        temp = temp->pNext;
    }
    return 0;
}

int List::AddNode(string number, string category, string passport, int balance)
{
    if (head == nullptr)
    {
        head = new Node(number, category, passport, balance);
        return 1;
    }
    else
    {
        Node* current = head;
        while (current->pNext != nullptr)
        {
            current = current->pNext;
        }
        current->pNext = new Node(number, category, passport, balance);
        return 0;
    }

}

Node::Node(string number, string category, string passport, int balance, Node* pNext)
{
    data.number = number;
    data.category = category;
    data.passport = passport;
    data.balance = balance;
    this->pNext = pNext;
}