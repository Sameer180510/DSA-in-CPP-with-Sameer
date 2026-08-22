#include <iostream>
#include <vector>

using namespace std;

// 1. Search a 2D Matrix

// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.

// You must write a solution in O(log(m * n)) time complexity.

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int size = row * col;

    int start = 0, end = size - 1, mid;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        int row_index = mid / col;
        int col_index = mid % col;

        if (matrix[row_index][col_index] == target)
        {
            cout << "Got it";
            return 1;
        }
        else if (matrix[row_index][col_index] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return 0;
}

// int main()
// {
//     vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};

//     cout << "Matrix element are: ";
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//     }

//     int target;

//     cout << "\nEnter the target element you want to search: ";
//     cin >> target;

//     searchMatrix(matrix, target);
//     return 0;
// }

// 2. Search in a Row-Column Sorted matrix
// Given a 2D integer matrix mat[][] of size n x m, where every row and column is sorted in increasing order and a number x, return true if the element x is present in the matrix. Otherwise, return false.

bool matrixSearch(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int i = 0, j = col - 1;

    while (i < row && j >= 0)
    {
        if (matrix[i][j] == target)
        {
            cout << "Got it";
            return 1;
        }
        else if (matrix[i][j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return 0;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 8, 12},
        {3, 4, 9, 15},
        {5, 6, 10, 18},
        {7, 11, 14, 20},
        {13, 16, 17, 25}};

    cout << "Matrix element are: ";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << " ";
        }
    }

    int target;

    cout << "\nEnter the target element you want to search: ";
    cin >> target;

    matrixSearch(matrix, target);
    return 0;
}