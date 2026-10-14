#include <iostream>
using namespace std;

class Customer
{
    string name;
    int acccount_number, balance;

    // Static data member
    // int total_customer;
    static int total_customer;

    static int total_balance;

public:
    // static int total_customer; // We can access it even without using object but it has to be public first

    Customer(string name, int acccount_number, int balance)
    {
        this->name = name;
        this->acccount_number = acccount_number;
        this->balance = balance;

        // total_customer = 1;
        total_customer++;

        total_balance += balance;
    }

    // Static member function
    // This helps to access the private members of class in public
    // ! But it can access only the static members of class not the others
    static void accessStatic()
    {
        cout << "Total customer are: " << total_customer << endl;
        cout << "Total balance is: " << total_balance << endl;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            total_balance += amount;
        }
    }

    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            total_balance -= amount;
        }
    }

    void display()
    {
        cout << name << " ";
        cout << acccount_number << " ";
        cout << balance << " ";
        cout << total_customer << " ";
        cout << total_balance << endl;
    }

    void display_total()
    {
        cout << "Total customer are: " << total_customer << endl;
    }
};

// datatype class_name scope resolution operator(::) variable_name = initilize;
int Customer::total_customer = 0;

int Customer::total_balance = 0;

int main()
{
    Customer C1("Sameer", 609, 264);
    // C1.display();  // Sameer 609 264 1

    Customer C2("Karitk", 123, 786);

    // C2.display_total(); // 2

    // C1.display(); // Sameer 609 264 2
    // C2.display(); // Karitk 123 786 2

    Customer C3("Amit", 601, 209);
    // C3.display(); // Amit 601 209 3
    // C1.display(); // Sameer 609 264 3

    // C2.display_total(); // 3

    // without object, Direct class ke help se bhi access kr skte hai
    // ! But it has to be public not the private member of class otherwise error will get generated
    // Customer::total_customer = 7;
    // C2.display_total(); // 7

    // Static member function
    Customer::accessStatic();

    C1.deposit(100);
    Customer::accessStatic();

    C2.withdraw(345);
    Customer::accessStatic();

    // The const keyword makes a variable's value unchangeable after initialization.

    return 0;
}