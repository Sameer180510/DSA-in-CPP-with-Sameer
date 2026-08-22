#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// // 1. Wave Print
// void wavePrint(int arr[][4], int row, int col)
// {
//     for (int j = 0; j < col; j++)
//     {
//         if (j % 2 == 0)
//         {
//             for (int i = 0; i < row; i++)
//             {
//                 cout << arr[i][j] << " ";
//             }
//         }
//         else
//         {
//             for (int i = row - 1; i >= 0; i--)
//             {
//                 cout << arr[i][j] << " ";
//             }
//         }
//     }
// }

// int main()
// {
//     int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 34, 23, 12};

//     // 1. Wave print

//     // wavePrint(arr, 3, 4);

//     return 0;
// }

// 2. Spiral Matrix

// Given an m x n matrix, return all elements of the matrix in spiral order.

// vector<int> spiralOrder(vector<vector<int>> &arr)
// {
//     vector<int> ans;
//     int row = arr.size(), col = arr[0].size();
//     int top = 0, right = col - 1, left = 0, bottom = row - 1;

//     while (top <= bottom && left <= right)
//     {
//         // Print top
//         for (int j = left; j <= right; j++)
//         {
//             ans.push_back(arr[top][j]);
//         }
//         top++;

//         // Print right
//         for (int i = top; i <= bottom; i++)
//         {
//             ans.push_back(arr[i][right]);
//         }
//         right--;

//         // Print bottom
//         if (top <= bottom)
//         {
//             for (int j = right; j >= left; j--)
//             {
//                 ans.push_back(arr[bottom][j]);
//             }
//         }
//         bottom--;

//         // Print left
//         if (left <= right)
//         {
//             for (int i = bottom; i >= top; i--)
//             {
//                 ans.push_back(arr[i][left]);
//             }
//         }
//         left++;
//     }
//     return ans;
// }

// int main()
// {
//     vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

//     vector<int> ans = spiralOrder(arr);
//     // print
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }

//     return 0;
// }

// 3. Transpose of Matrix
// Given a square matrix of size n x n, return the transpose matrix of the given matrix.

// The transpose of a matrix is obtained by converting all the rows to columns and all the columns to rows.

void transpose(vector<vector<int>> &arr)
{
    int row = arr.size(), col = arr.size();
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

int main()
{

    vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    cout << "Matrix is: ";
    for (int i = 0; i < arr.size(); i++)
        for (int j = 0; j < arr.size(); j++)
        {
            cout << arr[i][j] << " ";
        }

    cout << endl;
    transpose(arr);

    cout << "Transpose of matrix is: ";
    for (int i = 0; i < arr.size(); i++)
        for (int j = 0; j < arr.size(); j++)
        {
            cout << arr[i][j] << " ";
        }

    return 0;
}