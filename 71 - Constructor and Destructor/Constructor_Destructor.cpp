#include <iostream>
using namespace std;

class Customer
{
    string name;
    int account_number;
    int balance;

    int *roi;

public:
    // Default Constructor

    Customer()
    {
        // cout << "Constructor is called\n";
        name = "Sameer";
        account_number = 609;
        balance = 69;

        // Constructor sirf object create karne ke liye hi call hota hai
        // Isko initialize karne ke liye bhi use kar sakte hai, agar vo task complete hua to thik nhi to vhi se program terminate ho jayega. for exa, resource allocation
        // like dynamically memory allocate karne ke liye
        roi = new int[100];
    }

    // Parameterized Constructor
    // Customer(string a, int b, int c)
    // {
    //     name = a;
    //     account_number = b;
    //     balance = c;
    // }

    // If variable name and parameter are same then we will use the "this" keyword
    // Ye "this" keyword batata hai ki ye variable class ka hai ya parameter ka hai
    // Customer(string name, int account_number, int balance)
    // {
    //     this->name = name;
    //     this->account_number = account_number;
    //     this->balance = balance;
    // }

    Customer(string a, int b)
    {
        name = a;
        account_number = b;
        // Agr balance ko pass nahi karenge to vo garbage value le lega
        // Ya fir hum balance ko default value bhi de sakte hai
        balance = 49;
    }

    // Inline Constructor

    inline Customer(string a, int b, int c) : name(a), account_number(b), balance(c)
    {
    }

    // Agar constructor ka name same ho lekin parameter different ho to usko hum bolenge Constructor Overloading

    // Copy Constructor
    // It is also by default present in the class

    Customer(Customer &B) // We will have to pass B here as reference not as a value
    {
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;
    }

    // Printing value
    void display()
    {
        cout << name << " " << account_number << " " << balance << endl;
    }
};

int main()
{
    // Default Constructor
    Customer A1, A2, A3;
    // A1.display();
    // A2.display();
    // A3.display();

    // Parameterized Constructor
    Customer A4("Sumit", 1232, 1000);
    A4.display();

    Customer A5("Ritik", 143);
    A5.display();

    // Copy Constructor
    Customer A6(A5);
    A6.display();

    Customer A7;
    A7 = A6;
    A7.display();

    return 0;
}