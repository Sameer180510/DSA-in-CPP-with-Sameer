#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    // Human()
    // {
    //     cout << "Hello Human Constructor\n";
    // }
    // ~Human()
    // {
    //     cout << "Hello Human Destructor\n";
    // }

    Human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void work()
    {
        cout << "I am working\n";
    }
    void display()
    {
        cout << "Name is " << name << " , Age is " << age << endl;
    }
};

class Student : public Human
{
    int roll_number, fees;

public:
    // Creating a constructor
    // Student(string name, int age, int roll_number, int fees)
    // {
    //     this->name = name;
    //     this->age = age;
    //     this->roll_number = roll_number;
    //     this->fees = fees;
    // }

    // Student()
    // {
    //     cout << "Hello Student Constructor\n";
    // }

    // ~Student()
    // {
    //     cout << "Hello Student Destructor\n";
    // }

    // Creating a constructor but this time we will use the constructor of the base class to initialize the base class members
    Student(string name, int age, int roll_number, int fees) : Human(name, age)
    {
        this->roll_number = roll_number;
        this->fees = fees;
    }

    void display()
    {
        cout << "Name is " << name << " , Age is " << age << " , " << "Roll Number is " << roll_number << " , Fees is " << fees << endl;
    }
};

int main()
{
    // 

    // Student S1("Sameer", 21, 64, 75000);
    // S1.work();

    // Student S2;

    Student S3("Sameer", 21, 64, 75000);

    // There are two display functions, one in the base class and one in the derived class. The display function of the derived class will be called because it is overriding the display function of the base class. This is called function overriding.
    S3.display();

    return 0;
}