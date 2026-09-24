#include <iostream>
using namespace std;

// 1st Program
bool checkPal(string str, int start, int end)
{
    // Base condition
    if (start >= end)
    {
        cout << "It is a palindrome" << endl;
        return 1;
    }

    // Not matched
    if (str[start] != str[end])
    {
        cout << "Not a palindrome" << endl;
        return 0;
    }

    // Matched
    else
    {
        return checkPal(str, start + 1, end - 1);
    }
}

int countVowel(string str, int index)
{
    // Base condition
    if (index == -1)
    {
        return 0;
    }

    // Vowel hoga
    if (str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u')
    {
        return 1 + countVowel(str, index - 1);
    }

    // Vowel nahi hoga
    else
    {
        return countVowel(str, index - 1);
    }
}

// 3rd Program
// void stringRev(string str, int start, int end) // Will not worked, because it is pass by value
void stringRev(string &str, int start, int end) // This will worked because it is pass by reference
{
    if (start >= end)
    {
        return;
    }

    // swap(str[start], str[end]);
    // or
    char c = str[start];
    str[start] = str[end];
    str[end] = c;

    return stringRev(str, start + 1, end - 1);
}

// 4th Program
void lowerToUpper(string &str4, int index)
{
    if (index == -1)
    {
        return;
    }

    str4[index] = 'A' + str4[index] - 'a';
    lowerToUpper(str4, index - 1);
}

int main()
{
    // 1st program
    // Check Palindrome

    // string str1 = "Naman";

    // cout << checkPal(str1, 0, 4);

    // 2nd Program
    // Count the number of vowels in string, (String is lowercase)

    // string str2 = "sameer rahangdale";
    // int index = str2.size() - 1;

    // cout << "Total vowels in given string are: ";
    // cout << countVowel(str2, index);

    // 3rd Program
    // Reverse a string

    // string str3 = "Sameer Rahangdale";
    // int index = str3.size() - 1;

    // cout << "Reverse string is: ";
    // stringRev(str3, 0, index);

    // cout << str3;

    // 4th Program
    // Lowercase to Uppercase, (String is lowercase)

    string str4 = "sameer rahangdale"; // Output: SAMEERRAHANGDALE

    int index = str4.size() - 1;

    lowerToUpper(str4, index);

    cout << str4;
}