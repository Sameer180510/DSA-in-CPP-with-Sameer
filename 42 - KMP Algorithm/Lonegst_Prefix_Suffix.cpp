#include <iostream>
#include <vector>

using namespace std;

// 1. Longest Prefix Suffix

// Given a string s, of lowercase english alphabets, find the length of the longest proper prefix which is also a suffix.
// Note: Prefix and suffix can be overlapping but they should not be equal to the entire string.

int getLPSLength(string s)
{
    vector<int> lps(s.size(), 0);

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
    cout << "Length of the longest proper prefix which is also a suffix is: " << lps[lps.size() - 1] << endl;
    return lps[lps.size() - 1];
}

int main()
{
    string s = "aabcdaabc";

    cout << "string is " << s << endl;

    getLPSLength(s);

    string s1 = "aaaa";

    cout << "string is " << s1 << endl;

    getLPSLength(s1);

    return 0;
}