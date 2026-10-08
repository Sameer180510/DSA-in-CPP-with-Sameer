#include <iostream>
#include <vector>
using namespace std;

//  below row, col and dir will work but it will not give the answer in lexicographically increasing order.
// int row[4] = {-1, 1, 0, 0};
// int col[4] = {0, 0, -1, 1};
// string dir = "UDLR";

// Corrected row, col and dir to give the answer in lexicographically increasing order.
int row[4] = {1, 0, 0, -1};
int col[4] = {0, -1, 1, 0};
string dir = "DLRU";

// Function to check ki index asli matrix ke andar hai ya nahi
bool valid(int i, int j, int n)
{
    return i >= 0 && j >= 0 && i < n && j < n; // Returns 1 when all condtion are true
}

void total1(vector<vector<int>> &matrix, int i, int j, int n, string &path, vector<string> &ans, vector<vector<bool>> &visited)
{
    // Base Case
    if (i == n - 1 && j == n - 1)
    {
        ans.push_back(path);
        return;
    }

    // Method 1

    // Below is the code for the first method of exploring the maze using recursion. It checks each possible direction (up, down, left, right) and recursively explores the maze if the next cell is valid and not visited. The path is updated accordingly with the direction taken. but this method is not efficient as it has a lot of repeated code for each direction. The second method is more efficient and cleaner, using arrays to represent the possible moves and iterating through them.

    /*
    visited[i][j] = 1;

    // up
    if (valid(i - 1, j, n) && matrix[i - 1][j] && !visited[i - 1][j])
    {
        path.push_back('U');
        total1(matrix, i - 1, j, n, path, ans, visited);
    }

    // down
    if (valid(i + 1, j, n) && matrix[i + 1][j] && !visited[i + 1][j])
    {
        path.push_back('D');
        total1(matrix, i + 1, j, n, path, ans, visited);
    }

    // left
    if (valid(i, j - 1, n) && matrix[i][j - 1] && !visited[i][j - 1])
    {
        path.push_back('L');
        total1(matrix, i, j - 1, n, path, ans, visited);
    }

    // right
    if (valid(i, j + 1, n) && matrix[i][j + 1] && !visited[i][j + 1])
    {
        path.push_back('R');
        total1(matrix, i, j + 1, n, path, ans, visited);
    }

    */

    // Method 2
    // By iterating using row and col arrays

    visited[i][j] = 1;

    for (int k = 0; k < 4; k++)
    {
        if (valid(i + row[k], j + col[k], n) && matrix[i + row[k]][j + col[k]] && !visited[i + row[k]][j + col[k]])
        {
            path.push_back(dir[k]);
            total1(matrix, i + row[k], j + col[k], n, path, ans, visited);
            path.pop_back();
        }
    }

    visited[i][j] = 0;
}
int main()
{
    // 1. Rat in a Maze
    // Given a binary matrix maze[][] of size n × n containing values 0 and 1, find all possible paths for a rat to travel from the source cell (0, 0) to the destination cell (n - 1, n - 1). The rat can move in four directions: up(U), down(D), left(L), and right(R).

    // 1 represents an open cell through which the rat can move.
    // 0 represents a blocked cell that cannot be traversed.
    // The rat can move only through open cells and cannot visit the same cell more than once in a path. Return all valid paths as strings consisting of 'U', 'D', 'L', and 'R', representing the sequence of moves taken by the rat.

    // Note: Return the paths in lexicographically increasing order. If no valid path exists, return an empty list.

    vector<vector<int>> matrix = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}};

    // vector<vector<int>> matrix = {{1, 0}, {1, 0}};

    int n = matrix.size();

    vector<vector<bool>> visited(n, vector<bool>(n, 0)); // visited matrix to keep track of visited cells

    string path; // string to store the current path

    vector<string> ans; // vector to store all valid paths

    if (matrix[0][0] == 0 || matrix[n - 1][n - 1] == 0) // If starting or ending cell is blocked, no path is possible
    {
        cout << "Answer not possible \n";
        return 0;
    }

    cout << "All valid paths on which rat can travel is: \n";
    total1(matrix, 0, 0, n, path, ans, visited);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}