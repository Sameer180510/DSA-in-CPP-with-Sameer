#include <iostream>
#include <vector>
using namespace std;

// void swapping(int p1, int p2) // Pass by vlaue (will not swap the value)
// {
//     int temp = p1;
//     p1 = p2;
//     p2 = temp;
//     cout << "Address of p1: " << &p1 << endl;
//     cout << "Address of p2: " << &p2 << endl;
//     cout << "p1 and p2 after swapping: " << p1 << " " << p2 << endl;
// }

// void swapping(int *p1, int *p2) // Pass by pointer (will work and swap the value)
// {
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
//     cout << "Value in p1 is address of first: " << p1 << endl;
//     cout << "Value in p2 is address of second: " << p2 << endl;
//     cout << "p1 and p2 after swapping: " << *p1 << " " << *p2 << endl;

//     cout << "Address of p1: " << &p1 << endl;
//     cout << "Address of p2: " << &p2 << endl;
// }

void swapping(int &p1, int &p2) // Pass by reference (will work and swap the value)
{
    int temp = p1;
    p1 = p2;
    p2 = temp;

    cout << "p1 and p2 after swapping: " << p1 << " " << p2 << endl;
}
void make20(vector<int> &temp)
{
    for (int i = 0; i < 5; i++)
    {
        temp[i] = temp[i] + 20;
    }
}

void Double(int p[]) // can also be written as Double(int *p)
{
    for (int i = 0; i < 5; i++)
    {
        p[i] = p[i] * 2;
    }
}
int main()
{
    // char arr[5] = "1234";
    // char *ptr = arr;

    // // This will print the vlaue inside it not the address of it
    // cout << arr << endl;
    // cout << ptr << endl;

    // // This will print the address using the void pointer
    // cout << (void *)arr << endl;
    // cout << (void *)ptr << endl;

    // char name = 'a';
    // cout << &name << endl; // It will print some random value untill null is found eg. aα@
    // cout << (void *)&name << endl;

    // // Using Pointer
    // char *ptr1 = &name;
    // cout << (void *)ptr1 << endl;

    // // We can also use static cast instead of (void *)
    // // Ek data type ko doosre data type mein convert karne ke liye use hota hai.
    // // Syntax: static_cast<T>(value) = "value ko type T mein convert kar do."
    // cout << static_cast<void *>(ptr1) << endl;

    // Swapping using pointer
    // int first = 18, second = 7;
    // cout << "Address of first: " << &first << endl;
    // cout << "Address of second: " << &second << endl;

    // cout << "Original: " << first << " " << second << endl;

    // // swapping(first, second); // pass by value
    // // cout << "After Swapping: " << first << " " << second << endl;

    // swapping(&first, &second); // pass by pointer
    // cout << "After Swapping: " << first << " " << second << endl;

    // Reference variable
    // These both variable will point to same memory address
    // int num = 18;
    // int &temp = num; // num and temp are same
    // cout << num << endl;
    // cout << temp << endl;

    // temp++;
    // cout << num << endl;
    // cout << temp << endl;

    // cout << "Address of num: " << &num << endl;
    // cout << "Address of temp: " << &temp << endl;

    // Pass by reference using reference variable
    // vector, string . refernce ki help se solve 
    int num1 = 10, num2 = 45;
    cout << "num1 is: " << num1 << endl;
    cout << "num2 is: " << num2 << endl;
    
    swapping(num1, num2);
    cout << "num1 and num2 After swapping: " << num1 << " " << num2 << endl;
    
    // Implimenting this on Vector
    vector<int> v(5, 0);
    
    cout << "Original vector: ";
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    make20(v);
    cout << "After adding: ";
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
    
    cout << endl;
    
    // Working with array
    // int arr, char arr . pointer ki help se solve
    int arr[] = {18, 7, 45, 63, 10};
    cout << "Original array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    
    cout << "After doubling it: ";
    Double(arr);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}