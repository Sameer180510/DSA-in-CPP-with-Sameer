#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // ofstream is a pre-defined class in C++ which is used to create files and write information into files.
    ofstream fout;

    fout.open("Students_Name.txt");

    fout << "Sameer Rahangdale\n";
    fout << "Krunal Pardhi\n";
    fout << "Ayush Shebe\n";
    fout << "Krish Lonkar\n";
    fout.close(); // It ensures the output file is closed and pending data is flushed.

    // ifstream is a pre-defined class in C++ which is used to read and write information into files.
    ifstream fin;

    fin.open("Students_Name.txt");

    string line;

    // getline(fin, line) reads one complete line at a time, including names containing spaces. 
    while (getline(fin, line)) // getline() ka kam: fin ko read karke line ke andar dal do
    {
        cout << line << endl;
    }

    fout.close();
}