#include <iostream>
#include <vector>
using namespace std;
// Polymorphism types:
// 1) Compile Time 2) Run time

// 1) Compile Time types:
// 1) Method Overloading 2) Operator Overloading

// 2) Run time types:
// 1) Virtual Function

// 1) Method Overloading
class Area
{
public:
    int calculateArea(int r) // Circle
    {
        return 3.14 * r * r;
    }

    // Once the function is created then we can not write it again, it will give an error
    // int calculateArea(int r) // error: 'int Area::calculateArea(int)' cannot be overloaded
    // {
    //     return 3.14 * r * r;
    // }

    int calculateArea(int l, int b) // Rectangle
    {
        return l * b;
    }
};

// 2) Operator Overloading

class Complex
{
    int real, img;

public:
    Complex()
    {
    }

    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }

    void display()
    {
        cout << "The number is: " << real << " + " << img << "i" << endl;
    }

    Complex operator+(Complex &C)
    {
        // Complex ans; // It will int generate an error so, Default Constructor need to be created for Complex
        Complex ans;

        // real and img are private members of the class but we can access them because we are inside the class. If we were outside the class then we would not be able to access them.
        ans.real = real + C.real;
        ans.img = img + C.img;

        return ans;
    }

    Complex operator-(Complex &C)
    {
        Complex minus;

        minus.real = real - C.real;
        minus.img = img - C.img;

        return minus;
    }
};

// 3) Virtual Function
class Animal
{
public:
    // virtual void speak()
    // {
    //     cout << "Animal speaks" << endl;
    // }

    // Pure virtual function / Abstract Class
    // A pure virtual function is a virtual function that has no implementation in the base class. It is declared by assigning 0 to the function declaration. A class that contains at least one pure virtual function is called an abstract class. An abstract class cannot be instantiated, but it can be used as a base class for derived classes. Derived classes must provide an implementation for all pure virtual functions in order to be instantiated.
    virtual void speak()=0;
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "bho bho bho" << endl;
    }

    void run()
    {
        cout << "I can run" << endl;
    }
};

class Cat : public Animal
{
public:
    void speak()
    {
        cout << "Meow Meow Meow" << endl;
    }
};

int main()
{
    // 1) Method Overloading
    // Area A1, A2;

    // cout << "Area of Circle: " << A1.calculateArea(4) << endl;

    // cout << "Area of Rectangle: " << A2.calculateArea(3, 5) << endl;

    // cout << A1.calculateArea("Sameer") << endl; // error: invalid conversion from 'const char*' to 'int'

    // 2) Operator Overloading
    // Complex C1(3, 4);
    // C1.display();

    // Complex C2(5, 6);
    // C2.display();

    // // C1 + C2 = C1.fun(C2)
    // Complex C3 = C1 + C2;
    // C3.display();

    // Complex C4 = C2 - C1;
    // C4.display();

    // 3) Virtual Function
    Animal *A;
    // A = new Dog();
    // // A->speak(); // Animal speaks

    // // By using virtual keyword for speak() of Animal (parent) class we can use speak() of Dog (child) class
    // A->speak(); // bho bho bho

    // If we try to call run() of Dog class using Animal class pointer then it will give an error because run() is not a member of Animal class. So, we can not call it using Animal class pointer.
    // A->run(); // error: 'class Animal' has no member named 'run'

    // Dog D1;
    // D1.speak(); // bho bho bho
    // D1.run();   // I can run

    // Hum Animal class ka pointer bana ke usme Dog and Cat class ka object store kar rahe hain. Ab hum Animal class ka pointer use karke Dog aur Cat class ke speak() function ko call kar rahe hain
    Animal *p;
    vector<Animal *> animals;

    animals.push_back(new Dog());
    animals.push_back(new Cat());
    // animals.push_back(new Animal()); // When using pure virtual funtion, it will generate an error  
    animals.push_back(new Dog());
    animals.push_back(new Cat());

    // Now Printing
    for (int i = 0; i < animals.size(); i++)
    {
        p = animals[i];
        p->speak();
    }
}