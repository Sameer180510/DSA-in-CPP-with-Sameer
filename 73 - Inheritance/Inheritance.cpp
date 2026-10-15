#include <iostream>
using namespace std;

/*
class Human
{
    private:
    int a;

    protected:
    int b;

    // void fun() // still run
    // {
        //     a = 18;
        //     b = 7;
        //     c = 45;
        // }

        public:
        int c;

        // Access within the class
        void fun()
        {
            a = 18;
            b = 7;
            c = 45;
        }
    };
*/

class Human
{
    // 1)
    // private: // default
    // string name;
    // int age, weight;

    string religion, color;

    // 2)
    // protected:
    //     string name;
    //     int age, weight;

    // 3)
public:
    string name;
    int age, weight;
};

// Syntax: class child_class_name : access_specifier parent_class
// class Student : public Human
// {
//     int roll_number, fees;
// };

class Student : protected Human
{
private:
    int roll_number, fees;

public:
    // void func(string n, int a, int w)
    // {
    //     name = n;
    //     age = a;
    //     weight = w;
    // }

    Student(string name, int age, int weight, int roll_number, int fees)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->roll_number = roll_number;
        this->fees = fees;
    }

    void display()
    {
        cout << "Name is " << name << " , Age is " << age << " , Weight is " << weight << " , Roll Number is " << roll_number << " , Fees is " << fees << endl;
    }
};

class Teacher : public Human
{
    int salary, id;
};

int main()
{
    Human H1;

    // H1.a=18; //error: 'int Human::a' is private within this context

    // H1.b=18; // error: 'int Human::b' is protected within this context

    // H1.c = 18; // will run

    // H1.fun();

    // Inheritance

    // Student S1;

    // ! for private (Base class) and public (child class)
    // S1.name = "Sameer"; // error: 'std::__cxx11::string Human::name' is private within this context

    // ! for protected (Base class) and public (child class)
    // S1.name = "Sameer";  // error: 'std::__cxx11::string Human::name' is protected within this context

    // ! for public (Base class) and public (child class)
    // S1.name = "Sameer"; // Will run

    // ! for public (Base class) and protected (child class)
    // S1.name = "Sameer"; // error: 'std::__cxx11::string Human::name' is inaccessible within this context

    // ! for public (Base class) and protected (child class)
    // But we can access protected member of child class using public funtion of that child class
    // S1.func("Sameer", 21, 60);
    // S1.display(); // Sameer 21 60

    // ! for protected (Base class) and protected (child class)
    // S1.func("Sameer", 21, 60);
    // S1.display(); // Sameer 21 60

    // ! for private (Base class) and protected (child class)
    // Iska to koi chance hi nhi hai kyuki child class hi isko inherit nhi kr payegi

    // ! for public (Base class) and private (child class)
    // S1.func("Sameer", 21, 60);
    // S1.display(); // Sameer 21 60

    // ! for protected (Base class) and private (child class)
    // S1.func("Sameer", 21, 60);
    // S1.display(); // Sameer 21 60

    Student S1("Sameer", 21, 60, 64, 40000);
    S1.display();

    // Accessing public member of base class using child class object
    Teacher T1;
    T1.name = "Amit"; // Valid

    return 0;
}