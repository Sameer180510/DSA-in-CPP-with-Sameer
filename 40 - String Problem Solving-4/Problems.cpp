#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
1. Roman to Integer

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

*/

int charToNum(char c)
{
    if (c == 'I')
    {
        return 1;
    }
    else if (c == 'V')
    {
        return 5;
    }
    else if (c == 'X')
    {
        return 10;
    }
    else if (c == 'L')
    {
        return 50;
    }
    else if (c == 'C')
    {
        return 100;
    }
    else if (c == 'D')
    {
        return 500;
    }
    else
    {
        return 1000;
    }
}

int romanToInt(string s)
{
    int sum = 0, index = 0;
    while (index < s.size() - 1)
    {
        if (charToNum(s[index]) < charToNum(s[index + 1]))
        {
            sum = sum - charToNum(s[index]);
        }
        else
        {
            sum += charToNum(s[index]);
        }
        index++;
    }
    // Adding last roman character
    sum += charToNum(s[s.size() - 1]);

    cout << "Integer number is: " << sum << endl;

    return sum;
}
// int main()
// {
//     string s = "MCMXCIV";

//     cout << "Roman number is: " << s << endl;

//     romanToInt(s);

//     string s1 = "X";

//     cout << "Roman number is: " << s1 << endl;

//     romanToInt(s1);
// }

// 2. Factorials of large numbers

// Given an integer n, find its factorial. Return a list of integers denoting the digits that make up the factorial of n.

vector<int> factorial(int num)
{
    vector<int> ans(1, 1);

    while (num > 1)
    {
        int carry = 0, result, size = ans.size();

        for (int i = 0; i < size; i++)
        {
            result = ans[i] * num + carry;
            carry = result / 10;
            ans[i] = result % 10;
        }

        while (carry)
        {
            ans.push_back(carry % 10);
            carry = carry / 10;
        }
        num--;
    }
    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial of " << num << " is: ";
    vector<int> ans = factorial(num);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }

    return 0;
}