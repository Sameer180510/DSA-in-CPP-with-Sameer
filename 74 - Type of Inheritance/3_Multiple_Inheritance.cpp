#include <iostream>
using namespace std;

class Engineer
{
    void money()
    {
        cout << "Hello money" << endl;
    }

public:
    string branch;

    Engineer()
    {
        cout << "Hello Engineer Constructor" << endl;
    }
    ~Engineer()
    {
        cout << "Hello Engineer Destructor" << endl;
    }

    void work()
    {
        cout << "My branch is " << branch << endl;
    }
};

class Instagrammer
{
public:
    int followers;
    Instagrammer()
    {
        cout << "Hello Instagrammer Constructor" << endl;
    }

    ~Instagrammer()
    {
        cout << "Hello Instagrammer Destructor" << endl;
    }

    void contentCreator()
    {
        cout << "My total Followers are " << followers << endl;
    }
};

// Jis parent class ko pahle likha gaya hai uska constructor pahle call hoga 
// class child_class : access_specifier parent_class_name1, access_specifier parent_ class_name2
class Student : public Engineer, public Instagrammer
{
public:
    string name;

    Student()
    {
        cout << "Hello Student Constructor" << endl;
    }

    ~Student()
    {
        cout << "Hello Student Destructor" << endl;
    }
    // Creating a constructor for Student class to initialize name, branch and followers

    Student(string name, string branch, int followers)
    {
        this->name = name;
        this->branch = branch;
        this->followers = followers;
    }

    void showCase()
    {
        cout << "My name is " << name << endl;
        work();
        contentCreator();
    }
};

int main()
{
    // Student S1("Sameer", "CSE", 299);
    // S1.showCase();

    // S1.money(); // error: 'void Engineer::money()' is private within this context

    Student S1;

    return 0;
}