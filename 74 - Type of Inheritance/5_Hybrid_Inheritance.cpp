#include <iostream>
using namespace std;

class Student
{
public:
    void print()
    {
        cout << "I am a Student\n";
    }
};

class Male
{
public:
    void printMale()
    {
        cout << "I am a male\n";
    }
};

class Female
{
public:
    void printFemale()
    {
        cout << "I am a Female\n";
    }
};

class Boy : public Student, public Male
{
public:
    void printBoy()
    {
        cout << "I am a boy\n";
    }
};

class Girl : public Student, public Female
{
public:
    void printGirl()
    {
        cout << "I am a girl\n";
    }
};

int main()
{
    Girl G1;
    G1.printGirl(); // I am a girl
    G1.print();     // I am a Student

    Boy B1;
    B1.printMale(); // I am a male
}