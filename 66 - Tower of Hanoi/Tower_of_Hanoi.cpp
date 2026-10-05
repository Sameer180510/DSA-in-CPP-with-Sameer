#include <iostream>
#include <cmath>
using namespace std;

void toh(int n, int source, int help, int dest)
{
    if (n == 0)
        return;
        
    if (n == 1)
    {
        cout << "move disk " << n << " from rod " << source << " to rod " << dest << endl; // Optional but for better output printing
        return;
    }

    toh(n - 1, source, dest, help);

    cout << "move disk " << n << " from rod " << source << " to rod " << dest << endl; // Optional but for better output printing

    toh(n - 1, help, source, dest);
}
int main()
{
    // 1. Tower Of Hanoi
    // You are given n disks placed on a starting rod (from), with the smallest disk on top and the largest at the bottom. There are three rods: the starting rod(from), the target rod (to), and an auxiliary rod (aux).
    // You have to calculate the minimum number of moves required to transfer all n disks from the starting rod to the target rod, following these rules:
    //       1. Only one disk can be moved at a time.
    //       2. A disk can only be placed on top of a larger disk or on an empty rod.
    // Return the minimum number of moves needed to complete the task.

    // Constraints: 0 ≤ n ≤ 20

    int n;
    cout << "Enter total disk value: ";
    cin >> n;

    int from = 1, to = 3, aux = 2;

    cout << endl;

    toh(n, from, aux, to);

    cout << "Minimum number of moves needed to complete the task: ";
    cout << pow(2, n) - 1;
}