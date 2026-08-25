#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 1. Min Chars to Add for Palindrome
// Difficulty: HardAccuracy: 46.79%Submissions: 108K+Points: 8Average Time: 25m
// Given a string s, the task is to find the minimum characters to be added at the front to make the string palindrome.

// Note: A palindrome string is a sequence of characters that reads the same forward and backward.

int minchar(string s)
{
    // Psuedo Code
    // 1) s
    // 2) rev = s // reverse
    // 3) s+='$'
    // 4) s+=rev
    // 5) lps(s)
    // 6) s.size() - lps of last element

    string rev = s;
    reverse(rev.begin(), rev.end());

    int size = s.size();

    s += '$'; // Seperator

    s += rev; // Add reverse

    // Longest prefix nikalna hai
    int n = s.size();

    vector<int> lps(n, 0);

    int prefix = 0, suffix = 1;

    while (suffix < s.size())
    {
        // Matched
        if (s[prefix] == s[suffix])
        {
            lps[suffix] = prefix + 1;
            prefix++, suffix++;
        }

        else
        {
            if (prefix == 0)
            {
                suffix++;
            }
            else
            {
                prefix = lps[prefix - 1];
            }
        }
    }
    cout << "Minimum characters to be added at the front to make the string palindrome is: " << size - lps[n - 1] << endl;
    return size - lps[n - 1];
}

// int main()
// {
//     string s = "sameer";

//     cout << "String is: " << s << endl;

//     minchar(s);

//     string s1 = "aacecaaaa";

//     cout << "String is: " << s1 << endl;

//     minchar(s1);

//     return 0;
// }



// 2. Repeated String Match

// Given two strings a and b, return the minimum number of times you should repeat string a so that string b is a substring of it. If it is impossible for b​​​​​​ to be a substring of a after repeating it, return -1.

// Notice: string "abc" repeated 0 times is "", repeated 1 time is "abc" and repeated 2 times is "abcabc".

// Boss function is below
void lpsFind(vector<int> &lps, string s)
{
    int prefix = 0, suffix = 1;

    while (suffix < s.size())
    {
        // Matched
        if (s[prefix] == s[suffix])
        {
            lps[suffix] = prefix + 1;
            prefix++, suffix++;
        }

        // Not matched
        else
        {
            if (prefix == 0)
            {
                lps[suffix] = 0;
                suffix++;
            }
            else
            {
                prefix = lps[prefix - 1];
            }
        }
    }
}

int KMP_Match(string haystack, string needle)
{
    vector<int> lps(needle.size(), 0);
    lpsFind(lps, needle);

    int first = 0, second = 0;

    while (first < haystack.size() && second < needle.size())
    {
        // Matched
        if (haystack[first] == needle[second])
        {
            first++, second++;
        }

        // Not matched
        else
        {
            if (second == 0)
            {
                first++;
            }
            else
            {
                second = lps[second - 1];
            }
        }
    }
    if (second == needle.size())
    {
        return 1;
    }
    return 0;
}

int repeatedStringMatch(string s1, string s2)
{
    // 1) (first string) Repeated vale ka size increase >= second string length
    // 2) Check the substring ==> return ans
    // 3) one more time repeat, present ---> yes otherwise ---> no

    if (s1 == s2)
    {
        cout << "Both string are equal, therefore only 1 repeatation";
        return 1;
    }

    int repeat = 1;
    string temp = s1;

    while (temp.size() < s2.size())
    {
        temp += s1;
        repeat++;
    }

    // KMP pattern search
    if (KMP_Match(temp, s2) == 1)
    {
        cout << "Minimum number of repeataion times is: " << repeat << endl;
        return repeat;
    }

    // temp + s1, and again KMP search
    if (KMP_Match(temp + s1, s2))
    {
        cout << "Minimum number of repeataion times is: " << repeat + 1 << endl;
        return repeat + 1;
    }

    cout << "Not possible" << endl;
    ;
    return -1;
}

int main()
{
    string s1 = "sameer";

    cout << "First string is: " << s1 << endl;

    string s2 = "aacecaaaa";

    cout << "Second string is: " << s2 << endl;

    repeatedStringMatch(s1, s2);

    string a = "abcd", b = "cdabcdab";
    cout << "First string is: " << a << endl;
    cout << "First string is: " << b << endl;
    repeatedStringMatch(a, b);

    return 0;
}