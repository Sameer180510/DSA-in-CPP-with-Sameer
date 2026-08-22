#include <iostream>

using namespace std;

int main()
{
    // char arr[] = {'a', 'p', 'p', 'l', 'e'};
    // // cout << arr;
    // for (char i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // char arr[10];
    // cin >> arr;
    // cout << "Text is " << arr;

    // arr[4] = '\0'; // Inserting null value, will print untill only index 4
    // cout << "\nText is " << arr;

    // Creating String:

    // Syntax: string string_name = "Text";

    // Intialize string
    // string s = "Sameer";
    // cout << s;

    // Taking input from the user
    // string s;
    // cin >> s;
    // cout << "String is " << s;

    // Jab bhi hum space, tab ya enter krte hai to cin usko as a seperator man leta hai, isiliye isme space print nhi hoti
    // For exa. "Sameer Rahangdale" ==> Sameer
    // To counter this we use getline() but jaise hi enter press karege to as a separator ho jayega

    // Synatax: getline(cin, string_name);

    // string s;
    // cout << "Enter string: ";
    // getline(cin, s);
    // cout << "String is " << s;

    // cout << endl;
    // // Printing the size of string
    // cout << "Size of string is: " << s.size();

    // String Concatenation (append)

    // string s1 = "Sameer", s2 = "Aditya";
    // string s3 = s1 + s2; // 1st method
    // string s3 = s1.append(s2); // 2nd method
    // cout << "String is " << s3;

    // Inserting any charcter at the end of string
    // We can do same like the vector

    // cout << "String is " << s1 << endl;
    // s1.push_back('s'); // 1st method
    // cout << "After pushback, String is " << s1 << endl;

    // s1 = s1 + "asdf"; // 2nd method, complete string will be added
    // s1 = s1 + 's';    // Single character will be added
    // cout << "After change, String is " << s1 << endl;

    // Removing the last element from string
    // s1.pop_back();
    // cout << "After popback, String is " << s1 << endl;

    // Printing the quotation " "
    // string s = "Sam D2 is " good " boy"; // will show error

    // for this we will use scape operator "\"
    // Backslash: "\" will print the next element as it is but skips the backsalsh itself
    // string s= "Sam D2 is \" good \" boy"; // will run properly
    // cout << s;

    // string s = "\0";  // Printing the null, nothing will printed
    // string s = "\\0"; // will print now
    // cout << s;

    // Reverse a string

    string s = "sameer";
    cout << "Original string is: " << s << endl;
    
    int start = 0, end = s.size() - 1;
    while (start < end)
    {
        swap(s[start], s[end]);
        start++, end--;
    }
    cout << "Reverse string is: " << s << endl;
    
    // Calculate the length of the string without using size()
    
    int size = 0;
    
    while (s[size] != '\0')
    {
        size++;
    }
    cout << "Size of string is: " << size << endl;
    
    // Check whether a string is palindrome or not
    string s2 = "markram";
    cout << "Original string is: " << s2 << endl;
    start = 0, end = s2.size() - 1;
    while (start < end)
    {
        if (s2[start] != s2[end])
        {
            cout << "Not a Palindrome" << endl;
            
            return 0;
        }
        start++, end--;
    }
    cout << "It is Palindrome" << endl;
}
