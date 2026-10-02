#include <iostream>
#include <vector>
using namespace std;

// 1st Program
// 1st method
void permut(int arr[], vector<vector<int>> &ans, vector<int> &temp, vector<bool> &visited)
{
    for (int i = 0; i < visited.size(); i++)
    {
        if (visited.size() == temp.size())
        {
            ans.push_back(temp);
            return;
        }

        if (visited[i] == 0)
        {
            visited[i] = 1;
            temp.push_back(arr[i]);
            permut(arr, ans, temp, visited);
            visited[i] = 0;
            temp.pop_back();
        }
    }
}

// 1st Program
// 2nd Method

void permut2(vector<int> &arr, vector<vector<int>> &ans, int index)
{

    // Base Case
    if (index == arr.size())
    {
        ans.push_back(arr);
        return;
    }

    for (int i = index; i < arr.size(); i++)
    {
        swap(arr[index], arr[i]);
        permut2(arr, ans, index + 1);
        swap(arr[index], arr[i]);
    }
}

int main()
{
    // 1st Program
    // Permutations
    // Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

    // int arr[] = {18, 7, 45}; // input array of distinct integers

    // vector<vector<int>> ans; // to store the final answer
    // vector<int> temp; // to store the current permutation
    // vector<bool> visited(3, 0); // to keep track of the visited elements

    // cout << "Original array is: ";
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // cout << endl;

    // cout << "Permutaion of all elements in array: \n";

    // permut(arr, ans, temp, visited);

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     for (int j = 0; j < ans[i].size(); j++)
    //     {
    //         cout << ans[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // 2nd Method

    vector<int> arr = {18, 7, 45}; // input array of distinct integers

    vector<vector<int>> ans; // to store the final answer

    // permut2(ans, ans, index);

    cout << "Original array is: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Permutaion of all elements in array: \n";
    permut2(arr, ans, 0);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}