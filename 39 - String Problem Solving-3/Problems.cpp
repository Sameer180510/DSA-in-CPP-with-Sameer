#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 1. Sort Vowels in a String

// Given a 0-indexed string s, permute s to get a new string t such that:

// All consonants remain in their original places. More formally, if there is an index i with 0 <= i < s.length such that s[i] is a consonant, then t[i] = s[i].
// The vowels must be sorted in the nondecreasing order of their ASCII values. More formally, for pairs of indices i, j with 0 <= i < j < s.length such that s[i] and s[j] are vowels, then t[i] must not have a higher ASCII value than t[j].
// Return the resulting string.

// The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in lowercase or uppercase. Consonants comprise all letters that are not vowels.

string sortVowels(string s)
{
    vector<int> lower(26, 0);
    vector<int> upper(26, 0);

    for (int i = 0; i < s.size(); i++)
    {
        // lower a, e, i, o, u
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            lower[s[i] - 'a']++;
            s[i] = '#';
        }

        // upper A, E, I, O, U
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            upper[s[i] - 'A']++;
            s[i] = '#';
        }
    }

    string vowel;

    // upper
    for (int i = 0; i < 26; i++)
    {
        char c = 'A' + i;
        while (upper[i])
        {
            vowel += c;
            upper[i]--;
        }
    }

    // lower
    for (int i = 0; i < 26; i++)
    {
        char c = 'a' + i;
        while (lower[i])
        {
            vowel += c;
            lower[i]--;
        }
    }

    int first = 0, second = 0; // first points to main string while second points to vowel string

    while (second < vowel.size())
    {
        if (s[first] == '#')
        {
            s[first] = vowel[second];
            second++;
        }
        first++;
    }
    cout << "Sorted vowel string is: " << s << endl;
    return s;
}
// int main()
// {
//     string s = "SamEeR RahaNgdale";
//     cout << "Original string is: " << s << endl;
//     sortVowels(s);

//     string s1 = "lEetcOde";
//     cout << "Original string is: " << s1 << endl;
//     sortVowels(s1);

//     return 0;
// }

// 2. Add Strings

// Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.

// You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

string findSum(string num1, string num2)
{
    string ans;
    int index1 = num1.size() - 1, index2 = num2.size() - 1;
    int sum, carry = 0;

    // index2 >= 0
    while (index2 >= 0)
    {
        sum = (num1[index1] - '0') + (num2[index2] - '0') + carry;
        carry = sum / 10;
        char c = '0' + sum % 10;
        ans += c;
        index2--, index1--;
    }

    // index1 >= 0
    while (index1 >= 0)
    {
        sum = (num1[index1] - '0') + carry;
        carry = sum / 10;
        char c = '0' + sum % 10;
        ans += c;
        index1--;
    }

    if (carry)
    {
        ans += '1';
    }

    // reverse the ans
    reverse(ans.begin(), ans.end());

    // To remove the leading zeros from the result. exa: ans = 000000000 --> ans = 0
    while (ans.size() > 1 && ans[0] == '0')
        ans.erase(ans.begin());

    cout << "Addition of two number is: " << ans << endl;
    return ans;
}

string addStrings(string num1, string num2)
{
    if (num1.size() < num2.size())
    {
        return findSum(num2, num1);
    }
    else
    {
        return findSum(num1, num2);
    }
}

int main()
{
    // string num1 = "8669090023";
    string num1 = "00000000";
    // string num2 = "8767044313";
    string num2 = "0000000000";

    cout << "First number is: " << num1 << endl;
    cout << "Second number is: " << num2 << endl;

    addStrings(num1, num2);
}