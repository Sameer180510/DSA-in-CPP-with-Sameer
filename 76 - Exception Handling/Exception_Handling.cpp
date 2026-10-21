// An exception is an unexpected problem that arises during the execution
// of a program our program terminates suddenly with some
// errors/issues . Exception occurs during the running of the program

// The try keyword represents a block of code that may throw an
// exception placed inside the try block. It's followed by one
// or more catch blocks. If an exception occurs, try block
// throws that exception.

// The catch statement represents a block of code that is executed
// when a particular exception is thrown from the try block.
// The code to handle the exception is written inside the catch block.

// An exception in C++ can be thrown using the throw keyword.
// When a program encounters a throw statement, then it immediately
// terminates the current function and starts finding a matching
// catch block to handle the thrown exception.

#include <iostream>
#include <cstddef>
#include <exception>

/*
Exception class structure is quite similar to this, not exactly but kind of...
class  exception
{
    protected:
    string msg;

    public:

    exception(string msg)
    {
    this->msg = msg;
    }

    string what()
    {
        return msg;
    }
};

class runtime_error : public exception
{
    public:
    runtime_error(const string &msg): exception(msg);
};

*/

using namespace std;

// Custom Exception handling
class InvalidAmountError : public runtime_error
{
public:
    // InvalidAmountError(const string &msg) : runtime_error(msg) // error
    // A constructor needs a body, even if it's empty
    InvalidAmountError(const string &msg) : runtime_error(msg)
    {
    }
};

class InsufficientBalanceError : public runtime_error
{
public:
    InsufficientBalanceError(const string &msg) : runtime_error(msg)
    {
    }
};

class Customer
{
    string name;
    int balance, account_number;

public:
    Customer(string name, int balance, int account_number)
    {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    // Deposit
    /*
    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << amount << " is credited succssfully\n";
            }
            else
            {
                // cout << "Amount should be greater than 0\n";
                throw "Amount should be greater than 0";
                }

                cout << "Balance is: " << balance << endl;
                }

                */
    void deposit(int amount)
    {
        if (amount < 0)
        {
            // throw "Amount should be greater than 0";
            // throw "Amount should be greater than 0";
            // throw runtime_error("Amount should be greater than 0");
            // throw InvalidAmountError("Amount should be greater than 0");
            throw InvalidAmountError("Amount should be greater than 0");
        }
        balance += amount;
        cout << amount << " is credited succssfully\n";

        cout << "Balance is: " << balance << endl;
    }

    // Withdraw
    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << amount << " is debited successfully\n";
        }
        else if (amount < 0)
        {
            // cout << "Amount should be greater than 0\n";
            // throw "Amount should be greater than 0";
            // throw runtime_error("Amount should be greater than 0");
            throw InvalidAmountError("Amount should be greater than 0");
        }
        else
        {
            // cout << "Your balace is low\n";
            // throw "Your balace is low";
            // throw runtime_error("Your balace is low");
            throw InsufficientBalanceError("Your balace is low");
        }

        cout << "Balance is: " << balance << endl;
    }
};

int main()
{
    //! 1st Program
    Customer C1("Sameer", 100, 1423);

    // // C1.deposit(23);
    // // C1.deposit(-23); // Amount should be greater than 0

    try
    {
        C1.deposit(23);  // 23 is credited succssfully
        // C1.deposit(-23); // Exception aayega
        C1.withdraw(1023); // Exception is Occured
        C1.deposit(100); // Ye chalega hi nhi
    }
    // catch (const char *e)
    // catch (const runtime_error &e)
    catch (const InvalidAmountError &e)
    {
        // cout << "Exception Occured: " << e << endl; // Exception Occured: Amount should be greater than 0
        cout << "Exception Occured: " << e.what() << endl; // Exception Occured: Amount should be greater than 0
    }
    // Multiple catch block
    // catch (const bad_alloc &e)
    catch (const InsufficientBalanceError &e)
    {
        cout << "Mere bhai Exception is Occured: " << e.what() << endl;
    }
    // Default
    catch (...)
    {
        cout << "Exception is Occured" << endl;
    }

    // e.what() ye function exception class ka member function hai jo ki exception ka message return karta hai

    //! 2nd Program
    //! 2nd Program
    // Divide by 0 is undefined
    // When we devide a number by 0 it gives runtime error but it is not diplayed here, it shows this in online compiler

    // 1st Method
    /*
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (b==0)
    {
        cout<<"Divide by 0 is not possible\n";
        return 0;
        }

        int c = a / b;
        cout << "Answer is: " << c;

        */

    /*
    // 2nd Method
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    try
    {
        if (b == 0)
        {
            // throw "Divide by 0 is not possible";

            throw 10; // Exception Occured: 10 // Exception can also be of int type it's not necessary that it should be of char type
        }
        int c = a / b;
        cout << "Answer is: " << c;
    }
    // catch (const char *e)
    catch (const int e)
    {
        cout << "Exception Occured: " << e << endl;
    }

    */

    //! 3rd Program
    // Huge memory allocation

    //! In Online compiler it shows the exception properly

    // int *p = new int[1000000000000000000]; // error: size of array is too large
    // cout << "Memory allocation is successfull \n";

    // delete[] p;

    // try
    // {
    //     size_t n = 1000000000000ULL;

    //     int *p = new int[n];
    //     cout << "Memory allocation is successfull \n";

    //     delete[] p;
    // }
    // // catch (const exception &e)
    // catch (const bad_alloc &e)
    // {
    //     cout << "Mere bhai Exception is Occured: " << e.what() << endl; //  Mere bhai Exception is Occured: std::bad_alloc
    //     // cout << "Mere bhai Exception is Occured due to line 171: " << e.what() << endl; //  Mere bhai Exception is Occured due to line 171: std::bad_array_new_length
    // }
}