#include <iostream>
using namespace std;

class Customer
{
    // public:
    string name;
    int acccount_number, balance;
    int age;

public:
    Customer(string name, int acccount_number, int balance, int age)
    {
        this->name = name;
        this->acccount_number = acccount_number;
        this->balance = balance;
        this->age = age;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
        else
        {
            cout << "!!! Invalid amount" << endl;
        }
    }

    void updateAge(int age)
    {
        if (age > 0 && age < 125)
        {
            this->age = age;
        }
        else
        {
            cout << "!!! Invalid Age" << endl;
        }
    }
    void display()
    {
        cout << name << " ";
        cout << acccount_number << " ";
        cout << balance << " ";
        cout << age << " ";
        cout << endl;
    }
};

int main()
{
    Customer C1("Sameer", 609, 264, 21);
    Customer C2("Karitk", 123, 786, 24);
    // Customer C3("Amit", 601, 209, -45);
    Customer C3("Amit", 601, 209, 45);

    // C1.balance -= 1000; // class variables are public
    // C1.display(); // Sameer 609 -736 // Balance is in negative which is not possible because of direct access of variable

    // C1.deposit(-10); // !!! Invalid amount
    // C1.display();    // Sameer 609 264 (unchanged)

    // C3.display(); // Amit 601 209 -45

    // C3.age = -23;
    // C3.display(); // Amit 601 209 -23

    C3.updateAge(-7); // !!! Invalid Age
    C3.display();     // Amit 601 209 45

    C2.display(); // Karitk 123 786 24
    C2.updateAge(7);
    C2.display(); // Karitk 123 786 7

    return 0;
}