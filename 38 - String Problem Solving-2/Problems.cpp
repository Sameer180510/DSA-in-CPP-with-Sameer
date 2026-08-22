#include <iostream>
#include <vector>
using namespace std;

// 1. Longest Palindrome

// Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.

// Letters are case sensitive, for example, "Aa" is not considered a palindrome.

int longestPalindrome(string s)
{
    vector<int> lower(26, 0), upper(26, 0);

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a')
        {
            lower[s[i] - 'a']++;
        }
        else
        {
            upper[s[i] - 'A']++;
        }
    }
    int count = 0;
    bool odd = 0;

    for (int i = 0; i < 26; i++)
    {
        // lower
        if (lower[i] % 2 == 0)
        {
            count += lower[i];
        }
        else
        {
            count += lower[i] - 1;
            odd = 1;
        }

        // upper
        if (upper[i] % 2 == 0)
        {
            count += upper[i];
        }
        else
        {
            count += upper[i] - 1;
            odd = 1;
        }
    }

    cout << "Length of longest palindrome string is: " << count + odd << endl;
    return count + odd;
}

// int main()
// {
//     // string s = "aabsbbdsaabsb";
//     string s = "aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyyzz";
//     cout << "String is: " << s << endl;
//     cout << "Size of string is: " << s.size() << endl;

//     longestPalindrome(s);
//     return 0;
// }

// 2. Sorting the Sentence

// A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.

// A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.

// For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".
// Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.

string sortSentence(string s)
{
    vector<string> ans(10);
    string temp;
    int count = 0, index = 0;

    while (index < s.size())
    {
        if (s[index] == ' ')
        {
            int pos = temp[temp.size() - 1] - '0';
            temp.pop_back();
            ans[pos] = temp;
            temp.clear();
            count++;
        }
        else
        {
            temp += s[index];
        }
        index++;
    }
    int pos = temp[temp.size() - 1] - '0';
    temp.pop_back();
    ans[pos] = temp;
    temp.clear();
    count++;

    for (int i = 1; i <= count; i++)
    {
        temp += ans[i];
        temp += ' ';
    }
    temp.pop_back();
    cout << "Sorted sentence is: " << temp << endl;
    return temp;
}

int main()
{
    string s = "sentence4 a3 is2 This1";
    cout << "The original string is: " << s << endl;
    sortSentence(s);

    string s1 = "Myself2 Me1 I4 and3";
    cout << "The original string is: " << s1 << endl;
    sortSentence(s1);

    return 0;
}