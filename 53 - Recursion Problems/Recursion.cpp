#include <iostream>
using namespace std;

// 1st Program
int fact(int n)
{
    // Option 1
    // if (n == 1) // n = 0 case is not handled
    // {
    //     return 1;
    // }
    // // Option 2
    // if (n == 1 || n == 0) // This will run
    // {
    //     return 1;
    // }

    // Option 3
    if (n == 0) // This will also run
    {
        return 1;
    }

    return n * fact(n - 1);
}

// 2ndProgram
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n + sum(n - 1);
}

// 3rd Program
int pow(int num, int n)
{
    // if (n == 1) // If we remove this condition stil it will work
    // {
    //     return num;
    // }

    if (n == 0)
    {
        return 1;
    }

    return num * pow(num, n - 1);
}

// 4th Program
int squareSum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * n + squareSum(n - 1);
}
int main()
{
    // 1st Program
    // Factorial of number n

    // int n;
    // cout << "Enter number to print factorial of it: ";
    // cin >> n;

    // if (n < 0)
    // {
    //     cout << "Factorial of negative number is not possible";
    //     return 0;
    // }

    // cout << "Factorial of " << n << " is: ";
    // cout << fact(n);

    // 2nd Program
    // Sum of first n natural numbers
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;

    // if (n < 1)
    // {
    //     cout << n << " is not a natural number";
    //     return 0;
    // }
    
    // cout << "Sum of first " << n << " natural number is: ";
    // cout << sum(n);
    
    // 3rd Program
    // num to the power n
    
    // int num;
    // cout << "Enter a number to find its power: ";
    // cin >> num;
    
    // int n;
    // cout << "Enter power: ";
    // cin >> n;
    
    // cout << num << " to the power " << n << " is: ";
    // cout << pow(num, n);
    
    // 4th Program
    // Sum of square of n natural number
    int n;
    cout << "Enter a number to find sum of square of number till it: ";
    cin >> n;
    
    if (n < 1)
    {
        cout<<"Areii murkh " << n << " is not a natural number";
        return 0;
    }

    cout << "Sum of square of " << n << " natural number is: ";
    cout << squareSum(n);
}