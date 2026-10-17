#include <iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    void introduce()
    {
        cout << "Hello, I am " << name << endl;
    }
};

class Employee : public Person
{
protected:
    int salary;

public:
    void monthly_salary()
    {
        cout << "My monthly salary is " << salary << endl;
    }
};

class Manager : public Employee
{
public:
    string department;

    // Creating a constructor for Manager class to initialize name, salary and department
    Manager(string name, int salary, string department)
    {
        this->name = name;
        this->salary = salary;
        this->department = department;
    }

    void work()
    {
        cout << "I am working in " << department << endl;
    }
};

int main()
{
    Manager M1("Sameer", 45000, "CSE");

    M1.work(); // I am working in CSE
    M1.monthly_salary();
    M1.introduce();
    
    // M1.salary=20000; //error: 'int Employee::salary' is protected within this context
    M1.department = "Civil"; // will run
    M1.work(); // I am working in Civil

    return 0;
}