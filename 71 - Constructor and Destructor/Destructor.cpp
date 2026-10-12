#include <iostream>
using namespace std;

class Customer
{
    string name;
    int *data;

public:
    // Creating Constructor
    // Customer()
    // {
    //     name = "Sameer";
    //     data = new int;
    //     *data = 10;
    //     cout << "Constructor G1 is called\n";
    // }

    Customer()
    {
        name = "4";
        cout << "Constructor is " << name << endl;
    }

    Customer(string name)
    {
        this->name = name;
        cout << "Constructor is " << name << endl;
    }

    // Creating Destructor
    // It is the last function i.e. executed before the object is destroyed
    // Same name as class name but ~ is used before it
    // Also used to release the dynamically allocated memory

    // ~Customer()
    // {
    //     delete data;
    //     cout << "Destructor is called\n";
    // }

    // Most important ye reverse order me chalta hai mtlb phle A4 jayega fir A3 , fir A2, aur fir last me A1 ki memory release hogi
    ~Customer()
    {
        cout << "Destructor is " << name << endl;
    }
};

int main()
{
    // Customer G1;

    Customer A1("1"), A2("2"), A3("3");

    // Creting Object Dynamically
    Customer *A4 = new Customer; // Iska constructor to call hua hai but destructor call nhi hua hai so ye heap se memory release nhi krga

    // Release the memory, Ab destructor bhi call honga
    delete A4;
}