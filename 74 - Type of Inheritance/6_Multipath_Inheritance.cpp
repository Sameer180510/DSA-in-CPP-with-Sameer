#include <iostream>
using namespace std;

class Human
{
public:
    string name;

    void display()
    {
        cout << "My name is " << name << endl;
    }
};

// virtual keyword is used to avoid ambiguity in multipath inheritance. It ensures that only one instance of the base class is shared among the derived classes.
class Engineer : public virtual Human
{
public:
    string branch;

    void work()
    {
        cout << "My branch is " << branch << endl;
    }
};

class Instagrammer : public virtual Human
{
public:
    int followers;

    void contentCreator()
    {
        cout << "My total Followers are " << followers << endl;
    }
};

// Jab hum Engineer aur Instagrammer dono ko inherit karte hai to Human class ke members ka ambiguity create ho jata hai. Isliye humne Engineer aur Instagrammer dono me Human class ko virtual banaya hai. Isse ambiguity solve ho jati hai.
// for exa. Child class name aur display() ko alag alg man rhi hai jab ki vo done hai ek hi class me.  
class Student : public Engineer, public Instagrammer
{
public:
    int roll_number;

    Student()
    {
        }

    Student(string name, string branch, int followers, int roll_number)
    {
        this->name = name;
        this->branch = branch;
        this->followers = followers;
        this->roll_number = roll_number;
    }
};

int main()
{
    // Student S1("Sameer","CSE",289,64); // Error
    // Student S1;
    // S1.display();
    
    Student S1("Sameer","CSE",289,64);
    S1.display();

    return 0;
}