#include <iostream>
#include <vector>
using namespace std;

// 1st Program
// Subset of integer array
void subsequence(int arr[], int index, int end, vector<vector<int>> &ans, vector<int> &temp)
// Passing ans as a reference so that the changes also made in final array.
// We can also send the tmep array as a refernce (&temp) but for this we need to use pop_back() also on it, like given below.
// Because of passing temp as a reference (&temp) we can reduce space of the program.
{
    // Base case
    if (index == end)
    {
        ans.push_back(temp);
        return;
    }

    // Not included
    subsequence(arr, index + 1, end, ans, temp);

    // Included
    temp.push_back(arr[index]);
    subsequence(arr, index + 1, end, ans, temp);
    temp.pop_back(); // used when &temp is passed
}

// 2nd Program
// Subsets of string
void subsequenceString(string &s, int index, int end, vector<string> &ans, string temp)
{
    // Base case
    if (index == end)
    {
        ans.push_back(temp);
        return;
    }

    // Not included
    subsequenceString(s, index + 1, end, ans, temp);

    // Included
    temp.push_back(s[index]);
    subsequenceString(s, index + 1, end, ans, temp);
    temp.pop_back(); // used when &temp is passed
}

// 3rd Program
// 3. Generate Parentheses

void generateParenthesis(int num, int left, int right, vector<string> &ans, string &temp)
{
    // Base case
    if (left + right == num * 2)
    {
        ans.push_back(temp);
        return;
    }

    // Left parantheses add
    if (left < num)
    {
        temp.push_back('(');
        generateParenthesis(num, left + 1, right, ans, temp);
        temp.pop_back();
    }

    // Right parantheses add
    if (right < left)
    {
        temp.push_back(')');
        generateParenthesis(num, left, right + 1, ans, temp);
        temp.pop_back();
    }
}

int main()
{
    // 1st program
    // Subsets of integer array

    // int arr[] = {18, 7};

    // // Creating 2D Vector for storing final ans from temp array
    // vector<vector<int>> ans;

    // // Creating a Vector for storing temp array value
    // vector<int> temp;

    // cout << "Original array is: ";
    // for (int i = 0; i < 2; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // cout << endl;

    // // subsequence(array, start_index, array_size, ans_array, temp_array)
    // subsequence(arr, 0, 2, ans, temp);

    // cout << "Subsequence in array is: \n";
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     for (int j = 0; j < ans[i].size(); j++)
    //     {
    //         cout << ans[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // // 2nd program
    // // Subsets of string
    // string s = "sameer";

    // vector<string> ans; // Final answer

    // // Creating a Vector for storing temp array value
    // string temp;

    // cout << "Original string is: ";
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i];
    // }

    // cout << endl;

    // subsequenceString(s, 0, s.size(), ans, temp);

    // cout << "Subsequence in array is: \n";
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i];
    //     cout << endl;
    // }

    // 3rd Program
    // 3. Generate Parentheses
    // Given n pairs of parentheses, write a function to generate all combinations of well - formed parentheses.

    int num;
    cout << "Enter a number to generate pair of parantheses: ";
    cin >> num;

    cout << endl;

    vector<string> ans; // Final answer

    string temp;

    // generateParenthesis(number, left, right, ans_string, temp_string)
    generateParenthesis(num, 0, 0, ans, temp);

    cout << "Pair of parantheses is: \n";

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
        cout << endl;
    }
}