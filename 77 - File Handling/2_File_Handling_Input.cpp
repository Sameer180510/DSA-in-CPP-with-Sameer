#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
    // Taking input from user and then storing it in file
    vector<int> arr(5);

    cout << "Enter the input: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    // File ko open karo
    ofstream fout;
    fout.open("data.txt");

    fout << "Original Data: \n";
    for (int i = 0; i < arr.size(); i++)
    {
        fout << arr[i] << " ";
    }

    // fout.close();

    fout << "\nSorted data: \n";

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        fout << arr[i] << " ";
    }

    fout.close();
}