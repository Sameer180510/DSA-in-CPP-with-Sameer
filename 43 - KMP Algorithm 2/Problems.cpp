#include <iostream>
#include <vector>

using namespace std;

// 1. Find the Index of the First Occurrence in a String

// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

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

int firstOccurrence(string haystack, string needle)
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
        cout << "Index of the first occurrence of needle in haystack is:" << first - second << endl;
        return first - second;
    }
    return -1;
}

int main()
{
    // 1st test case
    string haystack = "sadbutsad";
    cout << "Heystack string is: " << haystack << endl;

    string needle = "sad";
    cout << "Needle string is: " << needle << endl;

    firstOccurrence(haystack, needle);

    // 2nd test case
    string txt = "GeeksForGeeks";
    cout << "txt string is: " << txt << endl;

    string pat = "For";
    cout << "pat string is: " << pat << endl;

    firstOccurrence(txt, pat);

    return 0;
}
