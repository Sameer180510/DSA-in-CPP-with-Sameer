#include <iostream>

using namespace std;

int main()
{
    // int a = 18;
    // cout << "The value of a is: " << a << endl;

    // // First method
    // // Print the address of a
    // cout << "The address of a is: " << &a << endl;

    // // Second method using pointer
    // // Syntax: data_type *pointer_name = &variable_name;

    // // It is read as "ptr ek pointer hai jo point kr rha hai integer type ki value ko aur usme a ka address store hai"
    // // It is read as "ptr is a pointer of integer type and it stores the address of a"
    // int *ptr = &a;
    // cout << "The address of a is: " << ptr << endl;

    // float b = 7.18;
    // float *ptr1 = &b;
    // cout << "The address of b is: " << ptr1 << endl;

    int c = 10;
    cout << "The value of c is: " << c << endl;
    int *ptr2 = &c;

    cout << "Size of ptr2 is: " << sizeof(ptr2) << endl; // checking the size of ptr2
    cout << "Value of ptr2: " << ptr2 << endl; // Address of c
    cout << "Value at the address stored in ptr2: " << *ptr2 << endl; // Value inside c
    
    int d = 7;
    // same pointer can be used to for another variable also
    ptr2 = &d;

    cout << "Value of ptr2: " << ptr2 << endl; // Address of d
    cout << "Value at the address stored in ptr2: " << *ptr2 << endl; // Value inside d
    
    d=18;
    cout << "Value at the address stored in ptr2: " << *ptr2 << endl; // Value inside d

}