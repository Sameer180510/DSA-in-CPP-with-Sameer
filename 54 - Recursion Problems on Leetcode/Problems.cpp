#include <iostream>
using namespace std;

// 1. Fibonacci Number
int fib(int num)
{
    // 1st Method
    // if (num == 0)
    // {
    //     return 0;
    // }
    // if (num == 1)
    // {
    //     return 1;
    // }

    // 2nd Method
    if (num <= 1)
    {
        return num;
    }

    return fib(num - 1) + fib(num - 2);
}

// 2nd Program
// This code works here but in leetcode and GFG it shows Time Limit Exceeded because we are using recursion here.
int climbStairs(int num)
{
    if (num <= 1)
    {
        return 1;
    }

    return climbStairs(num - 1) + climbStairs(num - 2);
}

// 3rd Program
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    return gcd(b, a % b);
}

int main()
{
    // 1. Fibonacci Number
    // The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,
    // F(0) = 0, F(1) = 1
    // F(n) = F(n - 1) + F(n - 2), for n > 1.
    // Given n, calculate F(n).

    // int num;

    // cout << "Enter a number: ";
    // cin >> num;

    // cout << "Fibonacci number is: ";
    // cout << fib(num);

    // 2nd Program
    // Ways to Reach the n'th Stair

    // There are n stairs, a person standing at the bottom wants to reach the top. The person can climb either 1 stair or 2 stairs at a time.

    // Count the number of ways, the person can reach the top (order does matter).

    // int num;

    // cout << "Enter a number of steps: ";
    // cin >> num;

    // cout << "Total ways to climb to the top: ";
    // cout << climbStairs(num);

    
    // 3rd Program
    // GCD of Two
    // Given two positive integers a and b, find GCD of a and b.

    // Note: Don't use the inbuilt gcd function

    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "GCD of " << num1 << " and " << num2 << " is: ";
    cout << gcd(num1, num2);
}