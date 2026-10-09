#include <iostream>
#include <vector>
using namespace std;

void find(int n, vector<string> &ans, string temp, int zero, int one)
{
    if (temp.size() == n)
    {
        ans.push_back(temp);
        return;
    }

    // This gives proper in derceasing order , ya fir mai ans ko main() function me descending order me arrange krdu vo bhi valid hai
    temp.push_back('1');
    find(n, ans, temp, zero, one + 1);
    temp.pop_back();

    if (zero < one)
    {
        temp.push_back('0');
        find(n, ans, temp, zero + 1, one);
        temp.pop_back();
    }

    // This also works, but it asking the string in decresing order so we will have to write it above the 0 condition

    // temp.push_back('1');
    // find(n, ans, temp, zero, one + 1);
    // temp.pop_back();
}
int main()
{
    // 1. Binary Numbers with More 1s in All Prefixes
    // Given a positive integer n, generate all n-bit binary numbers such that, for every prefix of each binary number, the count of 1's is greater than or equal to the count of 0's.

    // Return the binary numbers in decreasing order of their decimal value.

    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    vector<string> ans;
    string temp;

    cout << "According to condition, All binary number: \n";

    // find(n, ans, temp, zero, one);
    find(n, ans, temp, 0, 0);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}