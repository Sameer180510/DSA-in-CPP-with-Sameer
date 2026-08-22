#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 1. Longest Substring Without Repeating Characters

// Given a string s, find the length of the longest substring without duplicate characters.

int lengthOfLongestSubstring(string s)
{
    vector<bool> count(256, 0);

    int first = 0, second = 0, length = 0;

    while (second < s.size())
    {
        // Repeating character
        while (count[s[second]])
        {
            count[s[first]] = 0;
            first++;
        }

        count[s[second]] = 1;

        length = max(length, second - first + 1);

        second++;
    }
    cout << "Length of longest substring is: " << length;
    return length;
}

// int main()
// {
//     string s = "Sameer Rahangdale";
//     cout << "String is: " << s << endl;

//     lengthOfLongestSubstring(s);
//     return 0;
// }

// 2. Smallest distinct window

// Given a string str, your task is to find the length of the smallest window that contains all the characters of the given string at least once.

int findSubString(string s)
{
    vector<int> count(256, 0);

    int first = 0, second = 0, ans = s.size(), diff = 0;

    // Calculate all the unique character
    while (first < s.size())
    {
        if (count[s[first]] == 0)
        {
            diff++;
        }

        count[s[first]]++;
        first++;
    }

    for (int i = 0; i < 256; i++)
    {
        count[i] = 0;
    }

    first = 0;
    while (second < s.size())
    {
        // diff exist krta hai
        while (diff && second < s.size())
        {
            if (count[s[second]] == 0)
            {
                diff--;
            }

            count[s[second]]++;
            second++;
        }
        ans = min(ans, second - first);

        // diff ki value 1 na ban jaye
        while (diff != 1)
        {
            ans = min(ans, second - first);
            count[s[first]]--;

            if (count[s[first]] == 0)
            {
                diff++;
            }
            first++;
        }
    }
    cout << "Length of the smallest window that contains all the characters of the given string at least once is: " << ans;
    return ans;
}
int main()
{
    string s = "Sameer Rahangdale";
    cout << "String is: " << s << endl;

    findSubString(s);

    cout << endl;

    string s1 = "aabcbcdbca";
    cout << "String is: " << s1 << endl;

    findSubString(s1);
    return 0;
}