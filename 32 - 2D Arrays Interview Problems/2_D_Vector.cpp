#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // create a 2d vector
    // Syntax: vector<vector<datatype>>Vector_name(row,vector<datatype>(col, initialize));
    // vector<vector<int>> matrix(3, vector<int>(4, 1));

    // Print the value
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }
    // }

    // // Find the total rows in matrix
    // cout << "Rows: " << matrix.size();
    // // Find the total column in matrix
    // cout << endl;
    // cout << "Column: " << matrix[0].size();

    // Taking size of row and column from user as input
    int n, m;

    cout << "Enter rows and columns: \n";
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m, 1));

    // Taking value in vector from the user

    cout<<"Enter the value in matrix: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    // Printing value
    cout<<"\nValue in matrix are: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j]<<" ";
        }
    }
}