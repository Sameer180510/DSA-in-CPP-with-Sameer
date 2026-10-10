#include <iostream>
using namespace std;

void fun()
{
    string name3;
    int age3, roll_number3;
    string grade3;

    cout << "Enter details: ";
    cin >> name3 >> age3 >> roll_number3 >> grade3;

    cout << "Detail are: " << name3 << " " << age3 << " " << roll_number3 << " " << grade3 << endl;
}

// Syntax:
/*
class class_name
{
    Variables;
    Functions;
    }; // semicolon is compulsory
    */

class Student
{
    // private: // Default
    // Acccessible only within the class

    //    public: // Accessible from outside the class
private:
    string name;
    int age, roll_number;
    string grade;

public: // Using function and making it public
    void setName(string s)
    {
        if (s.size() == 0)
        {
            cout << "Name can not be empty !!!" << endl;
            return;
        }

        name = s;
    }

    void setAge(int a)
    {
        if (a < 0)
        {
            cout << "Age can't be negative !!!" << endl;
            return;
        }
        age = a;
    }

    void setRoll_number(int r)
    {
        roll_number = r;
    }

    void setGrade(string s)
    {
        grade = s;
    }

    // To print, another function is created
    void getName()
    {
        cout << name << endl;
    }

    void getAge()
    {
        cout << age << endl;
    }

    int getRoll_number()
    {
        return roll_number;
    }

    string getGrade(int pin)
    {
        if (pin == 6969)
        {
            // cout << "Correct pin, Grade is: " << grade;
            return grade;
        }

        else
        {
            cout << "Incorrect pin !!!" << endl;
            ;
            return "Try again";
        }
    }
};

class Temp
{
    char c;
    // int i;
    double d;
};

class Employee
{
public:
    string name;
    int age;
    string grade;
};

main()
{
    // Without using class, we can store the data in variables and print it. But this is not a good approach because we have to create multiple variables for each student. So, we can use class to store the data of students.

    /*

    string name1;
    int age1, roll_number1;
    string grade1;

    cout << "Enter details: ";
    cin >> name1 >> age1 >> roll_number1 >> grade1;

    cout << "Detail are: " << name1 << " " << age1 << " " << roll_number1 << " " << grade1 << endl;

    string name2;
    int age2, roll_number2;
    string grade2;

    cout << "Enter details: ";
    cin >> name2 >> age2 >> roll_number2 >> grade2;

    cout << "Detail are: " << name2 << " " << age2 << " " << roll_number2 << " " << grade2 << endl;

    fun();

    */

    // Creating an object for class

    // Synatax:
    // datatype Varibale_name: int age;
    // class_name object_name;
    // Student s1;

    // // Inserting value
    // s1.name = "Sameer";
    // s1.age = 21;
    // s1.roll_number = 64;
    // s1.grade = "F";

    // cout << "Detail are: " << s1.name << " " << s1.age << " " << s1.roll_number << " " << s1.grade << endl;

    // // Creating another student
    // Student s2;
    // s2.name = "Manish";
    // s2.age = 24;
    // s2.roll_number = 7;
    // s2.grade = "A+";

    // cout << "Detail are: " << s2.name << " " << s2.age << " " << s2.roll_number << " " << s2.grade << endl;

    /*
    Class
    /     \
    /       \
    /         \
    Data       Function
    (Attributes)   (Methods)

    */

    // By using function
    Student s1;

    s1.setName("Sameer G. Rahangdale");
    // s1.setName("");
    s1.setAge(21);
    s1.setRoll_number(64);
    s1.setGrade("A");

    // Now to print it we need to call the function
    s1.getName();
    s1.getAge();
    cout << s1.getRoll_number() << endl;
    cout << s1.getGrade(696) << endl;

    Temp t1;
    // Empty class size is: 1 byte
    // Empty class →  1 byte
    // Class with one int → 4 bytes

    cout << "Size of t1: " << sizeof(t1) << endl;

    // Dynamically memory allocation
    // Syntax: int *a = new int
    Employee *e = new Employee;

    (*e).name = "Kartik"; // 1st method
    e->age = 21;          // 2nd method
    (*e).grade = "A";

    cout << (*e).name << endl; // 1st method
    cout << (*e).age << endl;
    cout << e->grade << endl; // 2nd method

    return 0;
}