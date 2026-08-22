#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// 1. Rotate Image

// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

// void rotateMatrix(vector<vector<int>> &matrrix)
// {
//     int col = matrrix[0].size();
//     int row = matrrix.size();
//     // Find Transpose
//     for (int i = 0; i < col - 1; i++)
//     {
//         for (int j = i + 1; j < row; j++)
//         {
//             swap(matrrix[i][j], matrrix[j][i]);
//         }
//     }

//     // Reverse row
//     for (int i = 0; i < col; i++)
//     {
//         int start = 0, end = row - 1;

//         while (start < end)
//         {
//             swap(matrrix[i][start], matrrix[i][end]);
//             start++, end--;
//         }
//     }
// }
// int main()
// {
//     vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

//     cout << "Matrix is: ";
//     for (int i = 0; i < matrix.size(); i++)
//     {

//         for (int j = 0; j < matrix.size(); j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//     }
//     cout << endl;

//     rotateMatrix(matrix);

//     cout << "Matrix after 90 degrees rotaion is: ";
//     for (int i = 0; i < matrix.size(); i++)
//     {

//         for (int j = 0; j < matrix.size(); j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//     }
// }

// 2. Rotate a Matrix by 180 Counterclockwise
// Given a 2D square matrix mat[][] of size n x n, rotate it by 180 degrees without using extra space.

// Note: You must rotate the matrix in place and modify the input matrix directly.

void rotateMatrix180(vector<vector<int>> &matrix)
{
    int size = matrix.size();

    // Reverse column
    for (int j = 0; j < size; j++)
    {
        int start = 0, end = size - 1;
        
        while (start < end)
        {
            swap(matrix[start][j], matrix[end][j]);
            start++, end--;
        }
    }
    
    // Reverse Row
    for (int i = 0; i < size; i++)
    {
        int start = 0, end = size - 1;

        while (start < end)
        {
            swap(matrix[i][start], matrix[i][end]);
            start++, end--;
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    cout << "Matrix is: ";
    for (int i = 0; i < matrix.size(); i++)
    {

        for (int j = 0; j < matrix.size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
    }
    cout << endl;

    rotateMatrix180(matrix);

    cout << "Matrix after 180 degrees rotaion is: ";
    for (int i = 0; i < matrix.size(); i++)
    {

        for (int j = 0; j < matrix.size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
    }
}
