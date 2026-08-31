#include <iostream>
using namespace std;

void fun1(int *p)
{
    *p = *p + 10;
    *p -= 3;
}

void fun2(int *p1) //  It will not change the address of p, therefore same address wil print
{
    p1++;
}

void fun3(int **p1)
{
    *p1 = *p1 + 1;
}

// Question 2
void second(int *p1, int *p2)
{
    p1 = p2;
    *p1 = 2;
}

// Question 5
int Four(int x, int *py, int **ppz)
{
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;

    return x + y + z;
}

// Question 6
void five(char *str1, char *str2)
{
    while ((*str1 = *str2))
    {
        str1++, str2++;
    }
}

int main()
{
    // int n = 18;
    // int *p = &n; // Single Pointer
    // cout << "Address of n: " << p << endl;

    // int **p2 = &p; // Double Pointer
    // cout << "Address of p: " << p2 << endl;
    // cout << "Address of p: " << &p << endl;

    // int ***p3 = &p2; // Triple Pointer
    // cout << "Address of p2: " << p3 << endl;
    // cout << "Address of p2: " << &p2 << endl;

    // Value ko modify karna hai, jo n me rakhi hai...

    // cout << "Original: " << n << endl;

    // // By using Single Pointer
    // *p = *p + 5; // 18 + 5
    // cout << "Using Single Pointer: " << n << endl;

    // // By using Double Pointer
    // **p2 = **p2 + 5; // 23 + 5
    // cout << "Using Double Pointer: " << n << endl;

    // // By using Triple Pointer
    // ***p3 = ***p3 + 5; // 28 + 5
    // cout << "Using Triple Pointer: " << n << endl;

    // fun1(p);
    // cout << n << endl;
    // cout << *p << endl;

    // cout << p << endl; // 0x61ff08
    // fun2(p);
    // cout << p << endl; //0x61ff08 // It will not change the address of p, therefore same address wil print

    // cout << p << endl; // 0x61ff08
    // fun3(p2);
    // cout << p << endl; // 0x61ff0c // Address changed

    // Question 1:
    // char C[] = "GATE2024";
    // char *p = C;
    // cout << p + p[3] - p[1]; // address + 'E' - 'A'

    // cout << endl;

    // Question 2
    // int i = 0, j = 1;
    // second(&i, &j);
    // cout << i << " " << j;

    // cout << endl;

    // Question 3
    // int *ptr;
    // int x = 0;
    // ptr = &x;
    // int y = *ptr;
    // *ptr = 1;
    // cout << x << " " << y;

    // cout << endl;

    // Question 4
    // int a = 5, b = 10;
    // int &name = a;
    // int *ptr = &a;
    // (*ptr)++;
    // ptr = &b;
    // *ptr = *ptr + 5;
    // name += 5;
    // cout << a << " " << b;

    // Question 5
    int c, *b, **a;
    c = 4, b = &c, a = &b;
    cout << Four(c, b, a); // 19
    cout << endl;

    // Question 6
    // char first[] = "Mohit";
    // char second[] = "Rohan";
    // five(first, second);
    // cout << first;

    return 0;
}