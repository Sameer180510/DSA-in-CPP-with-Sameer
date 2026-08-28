#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {18, 7, 45, 63, 10};
    // arr++; // This will give error because arr is a constant pointer and we cannot change the address of arr
    int *ptr = arr;

    // Print the address of first element or 0 index
    cout << arr << endl;
    cout << arr + 0 << endl;
    cout << &arr[0] << endl;
    cout << ptr << endl;

    // // Print the address of first element or 1 index
    cout << arr + 1 << endl;
    cout << &arr[1] << endl;

    // // Print the value of o index
    cout << *arr << endl;
    cout << arr[0] << endl;
    cout << *(arr + 0) << endl;
    cout << *ptr << endl;

    // // Print all address

    for (int i = 0; i < 5; i++)
    {
        cout << arr + i << endl;
    }

    // // Print all values

    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << endl;
    }

    // // Print all value
    for (int i = 0; i < 5; i++)
    {
        cout << ptr[i] << endl;
    }

    // // Print all the address
    for (int i = 0; i < 5; i++)
    {
        cout << ptr + i << endl;
    }

    // // Arithmetic operation ptr++, ptr--, ptr = ptr + 1

    // // Print all the values
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << endl;
        ptr++;
    }

    // //  Will give garbage value because size of array is 5 and we are trying to access 10 elements
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << *ptr << endl;
    //     ptr++;
    // }

    // Accessing the 4th index of array using pointer arithmetic (addition)
    ptr = ptr + 3;
    cout<<*ptr<<endl; // 63

    ptr = ptr - 2;
    cout<<*ptr<<endl; // 7

}