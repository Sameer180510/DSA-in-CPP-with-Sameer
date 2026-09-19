#include <iostream>
using namespace std;

// 1st Method
void print1(int num, int N)
{
    // Base case
    if (num == N)
    {
        cout << num << endl;
        return;
    }

    cout << num << endl;
    print1(num + 1, N);
}

// 2nd Method
void print2(int N)
{
    // Base case
    if (N == 1)
    {
        cout << 1 << endl;
        return;
    }

    print2(N - 1);
    cout << N << endl;
}

// 2nd Program
// 1st Method
void printEven1(int num, int N)
{
    if (num == N)
    {
        cout << num << endl;
        return;
    }

    cout << num << endl;
    printEven1(num + 2, N);
}

// 2nd Method
void printEven2(int num, int N)
{
    if (num > N)
    {
        return;
    }

    cout << num << endl;
    printEven2(num + 2, N);
}

// 3rd Method
void printEven3(int N)
{
    if (N == 2)
    {
        cout << 2 << endl;
        return;
    }

    printEven3(N - 2);
    cout << N << endl;
}

int main()
{
    // 1st Program
    // Print number from 1 to N
    // int N;
    // cout << "Enter a number to print from 1 to that number: ";
    // cin >> N;

    // 1st Method
    // print1(1, N);

    // 2nd Method
    // print2(N);

    // 2nd Program
    // Print even number from 1 to N
    int N;
    cout << "Enter a number to print even number from 1 to that number: ";
    cin >> N;

    // 1st Method
    // if (N % 2 == 1)
    // {
    //     N--;
    // }
    // printEven1(2, N);

    // 2nd Method
    // printEven2(2, N);

    // 3rd Method
    if (N % 2 == 1)
    {
        N--;
    }

    printEven3(N);
}