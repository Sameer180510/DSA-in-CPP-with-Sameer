#include <iostream>
#include <vector>

using namespace std;

// 1. Defanging an IP Address

// Given a valid (IPv4) IP address, return a defanged version of that IP address.

// A defanged IP address replaces every period "." with "[.]".
string defangIPaddr(string address)
{
    int index = 0;
    string ans;

    while (index < address.size())
    {
        if (address[index] == '.')
        {
            ans = ans + "[.]";
        }
        else
        {
            ans = ans + address[index];
        }
        index++;
    }
    return ans;
}
// int main()
// {
//     // string address = "1.1.1.1";
//     string address = "255.100.50.0";
//     cout << "Original IP address is: " << address << endl;

//     cout << "Defang IP address is: " << defangIPaddr(address) << endl;
//     return 0;
// }

// 2. String Rotated by 2 Places
// Given two strings s1 and s2. Return true if the string s2 can be obtained by rotating (in any direction) string s1 by exactly 2 places, otherwise, false.

// Note: Both rotations should be performed in same direction chosen initially.
void rotateClockwise(string &clockwise)
{
    char c = clockwise[clockwise.size() - 1];
    int index = clockwise.size() - 2;

    while (index >= 0)
    {
        clockwise[index + 1] = clockwise[index];
        index--;
    }
    clockwise[0] = c;
}
void rotateAntiClockwise(string &anticlockwise)
{
    char c = anticlockwise[0];
    int index = 1;

    while (index < anticlockwise.size())
    {
        anticlockwise[index - 1] = anticlockwise[index];
        index++;
    }
    anticlockwise[anticlockwise.size() - 1] = c;
}

bool isRotated(string &s1, string &s2)
{
    if (s1.size() != s2.size())
    {
        cout << "Length of both strings is different";
        return 0;
    }

    string clockwise, anticlockwise;

    clockwise = s1;
    rotateClockwise(clockwise);
    rotateClockwise(clockwise);

    if (clockwise == s2)
    {
        cout << "String 2 can be obtained by rotating string 1 in clockwise";
        return 1;
    }

    anticlockwise = s1;
    rotateAntiClockwise(anticlockwise);
    rotateAntiClockwise(anticlockwise);

    if (anticlockwise == s2)
    {
        cout << "String 2 can be obtained by rotating string 1 in anticlockwise";
        return 1;
    }
    return 0;
}

// int main()
// {
//     string s1 = "amazon";
//     // string s1 = "amajhzon";
//     // string s2 = "azonam";
//     string s2 = "onamaz";

//     isRotated(s1, s2);
// }

// 3. Check if the Sentence Is Pangram

// A pangram is a sentence where every letter of the English alphabet appears at least once.

// Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

bool checkPangram(string sentence)
{
    vector<bool> alphabet(26, 0);

    for (int i = 0; i < sentence.size(); i++)
    {
        alphabet[sentence[i] - 'a'] = 1;
    }

    for (int i = 0; i < alphabet.size(); i++)
    {
        if (alphabet[i] == 0)
        {
            cout << "No Pangram";
            return 0;
        }
    }
    cout << "It is pangram";
    return 1;
}

// int main()
// {
//     // string sentence = "Sameer";
//     string sentence = "thequickbrownfoxjumpsoverthelazydog";

//     checkPangram(sentence);
// }

// 4. Sort a String

// Given a string consisting of lowercase letters, arrange all its letters in ascending order.

string sortString(string s1)
{
    vector<int> alphabet(26, 0);

    for (int i = 0; i < s1.size(); i++)
    {
        int index = s1[i] - 'a';
        alphabet[index]++;
    }

    string ans;
    for (int i = 0; i < alphabet.size(); i++)
    {
        char c = 'a' + i;

        while (alphabet[i])
        {
            // ans = ans + c; // Can cause RunTime Error
            ans.push_back(c);
            alphabet[i]--;
        }
    }
    return ans;
}

int main()
{
    string s1 = "sameer";

    cout << "Sorted string is: ";
    cout << sortString(s1);
}
