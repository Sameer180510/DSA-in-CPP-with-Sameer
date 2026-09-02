#include <iostream>
using namespace std;
int main()
{
    // // Array create krna hai, jo store karega ka address
    // int n, m; // n= rows , m=columns
    // cout << "Enter no. of rows and column: \n";
    // cin >> n >> m;

    // int **ptr = new int *[n];

    // // Created 2D array
    // for (int i = 0; i < n; i++)
    // {
    //     ptr[i] = new int[m];
    // }

    // // taking input from user
    // cout << "Enter value in array: \n";
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin >> ptr[i][j];
    //     }
    // }
    // cout << endl;
    // cout << "Value in array are: ";
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << ptr[i][j] << " ";
    //     }
    // }
    // cout << endl;

    // // Now, Release the memory from heap for this
    // for (int i = 0; i < n; i++)
    // {
    //     delete[] ptr[i]; // ptr[] ke anadar ka data delete
    // }
    // delete[] ptr; // Ab direct ptr delete

    // Creating 3D Array
    int L, B, H;
    cout << "Enter the length, breadth and height of array: \n";
    cin >> L >> B >> H;

    int ***ptr = new int **[L]; // 3D array

    // Create 2D array and store it's address in ptr

    for (int i = 0; i < L; i++)
    {
        ptr[i] = new int *[B]; // 2D array

        for (int j = 0; j < B; j++)
        {
            ptr[i][j] = new int[H]; // 1D array
        }
    }

    // Taking input
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < B; j++)
        {
            for (int k = 0; k < H; k++)
            {
                ptr[i][j][k] = i + j + k;
            }
        }
    }

    // Printing it
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < B; j++)
        {
            for (int k = 0; k < H; k++)
            {
                cout << ptr[i][j][k] << " ";
            }
        }
    }
}