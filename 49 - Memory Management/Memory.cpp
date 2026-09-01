#include <iostream>
using namespace std;
int main()
{
    // Variable ke liye heap memory allocate karo
    // Agar int ke liye chahiye to...
    int *ptr = new int;
    cout << "Address of ptr: " << ptr << endl;

    // Inserting value in ptr
    *ptr = 18; // Value assign
    cout << "Value at ptr: " << *ptr << endl;

    // Memory allocation for float value
    float *ptr2 = new float;
    *ptr2 = 7.45;
    cout << "Address of ptr2: " << ptr2 << endl;
    cout << "Value at ptr2: " << *ptr2 << endl;

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int *p = new int[n];

    // Insert value in array
    for (int i = 0; i < n; i++)
    {
        p[i] = i + 1;
    }

    // Print array
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }

    // delete keyword ka use
    // It deletes the memory allocated in heap memory
    delete ptr;
    delete ptr2;
    delete[] p; // it was use for array so [] is used
}