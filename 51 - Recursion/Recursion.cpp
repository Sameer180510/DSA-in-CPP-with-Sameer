#include <iostream>
using namespace std;
/*
// 1st Case
// It will not get executed
void fun3(int n)
{
    cout << n << " days left for birthday !!!\n";
    fun2(n-1); // will give an error : 'fun2' was not declared in this scope
}
void fun2(int n)
{
    cout << n << " days left for birthday !!!\n";
    fun1(n-1); // will give an error :  'fun1' was not declared in this scope
}
void fun1(int n)
{
    cout << n << " days left for birthday !!!\n";
    fun0(0); // will give an error: 'fun0' was not declared in this scope
}
void fun0(int n)
{
    cout << "Happy Birthday to me\n";
}

*/

/*
// 2nd Case
// Now it will get executed
void fun0(int n)
{
    cout << "Happy Birthday to me\n";
}

void fun1(int n)
{
    cout << n << " days left for birthday !!!\n";
    fun0(0);
}
void fun2(int n)
{
    cout << n << " days left for birthday !!!\n";
    fun1(n - 1);
}
void fun3(int n)
{
    cout << n << " days left for birthday !!!\n";
    fun2(n - 1);
}
*/

/*
// 3rd Case
// But if we need to print for 100 days then it will be very difficult to write 100 functions. So we can use recursion to solve this problem
void fun0(int n)
{
    cout << "Happy Birthday to me\n";
}
// If we forget to write the base case (Stoppage Condition) then it will give an error: Segmentation fault (core dumped), like below
void fun3(int n)
{
    cout << n << " days left for birthday !!!\n";
    fun3(n - 1);
}
*/

// 4th Case
// Proper Recursion with Base Case
void fun3(int n)
{
    if (n == 0)
    {
        cout << "Happy Birthday to me\n";
        return;
    }

    cout << n << " days left for birthday !!!\n";
    fun3(n - 1);
}

// 2nd Program
void print(int num)
{
    // Base case
    if (num == 1)
    {
        cout << 1 << endl;
        return;
    }
    cout << num << endl;
    print(num - 1);
}


// 3rd Program
void printEven(int num)
{
    if (num<1)
    {
        cout<<1<<endl;
        return;
    }
    
    cout << num << endl;
    printEven(num - 2);
}

int main()
{
    // int n = 5;

    // // Iterative approach
    // 1st Case
    // for (int i = n; i > 0; i--)
    // {
    //     cout << i << " days left for birthday !!!\n";
    // }
    // cout<<"Happy Birthday to me\n";

    /*
    // 2nd Case
    fun3(3);
    fun2(2);
    fun1(1);
    fun0(0);
    */

    // 3rd Case
    // fun3(3);

    // Recursive Approach
    // 4th Case
    // fun3(18);

    // Print num to 1 using iterative apporoach
    // int num = 7;
    // for (int i = num; i > 0; i--)
    // {
    //     cout << i << endl;
    // }

    // 2nd Program
    // Print num to 1 using recursive apporoach
    // print(7);

    // 3rd Program
    // Print even number num to 1;
    printEven(10);
}