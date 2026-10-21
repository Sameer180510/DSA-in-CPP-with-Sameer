#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Write operation
    // ofstream (pre-defined) class ka obejct bnana pdega
    ofstream fout; // fout ek object hai

    // File ko open karna
    // Syntax: object.open("file_path"); // .open() class ka member function hai
    fout.open("zoom.txt"); // File agar present hogi to open kr dega, nhi to phle create karega fir usko open karega

    // Data ko write karna
    fout << "India will win 2027 World Cup ";

    // File close to release the resources of file
    fout.close();

    // Read operation
    ifstream fin;

    // File ko open karna
    fin.open("zoom.txt");

    // File ko read krna
    char c;
    // fin >> c; // Space print nhi karega
    c = fin.get();

    while (!fin.eof())
    {
        cout << c;
        // fin >> c;
        c = fin.get();
    }

    fin.close();
}