#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    Human()
    {
        // Created to avoid error in the derived class when we use the constructor of the base class to initialize the base class members
    }
    Human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << "Name is " << name << " , Age is " << age << endl;
    }

    void work()
    {
        cout << "I am working\n";
    }
};

class Student : public Human
{
    int roll_number, fees;

public:
    Student(string name, int age, int roll_number, int fees) : Human(name, age)
    {
        this->roll_number = roll_number;
        this->fees = fees;
    }

    void display()
    {
        cout << "Student Name is " << name << " , Age is " << age << " , " << "Roll Number is " << roll_number << " , Fees is " << fees << endl;
    }
};

class Teacher : public Human
{
    int salary;

public:
    Teacher(int salary, string name, int age)
    {
        this->salary = salary;
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << "Teacher Name is " << name << " , Age is " << age << " , Salary is " << salary << endl;
    }
};
int main()
{
    Student S1("Sameer", 21, 64, 75000);
    S1.display();

    Teacher T1(87000, "Rohit", 28);
    T1.display();

    return 0;
}