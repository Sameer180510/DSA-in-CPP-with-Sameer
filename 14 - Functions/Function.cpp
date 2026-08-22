#include<iostream>
using namespace std;

// Note !!! argument are passed to a function while calling it and parameter are passed while declaring a function

// 1st Program funtions:

    // int Sum(int m, int n) // Function Declare, // Multiple parameter: More than one parameter 
    // {
    //     // Function Define:
    //     int ans = m + n;
    //     return ans;
    // }

    // int Mul(int m, int n) // Function Declare // int is used as return type of Mul() because it is expecting an int value as output
    // {
    //     // Function Define:
    //     int ans = m * n;
    //     return ans;
    // }

    // void Sub(int m, int n) // Function Declare // void is used as return type of Sub() because it is not expecting any output therefore cout<<sum is used instead of return ans
    // {
    //     // Function Define:
    //     int ans = m - n;
    //     cout<<"Subtraction = "<<ans<<endl;
    // }



    // void fun() //  void is used as return type when we dont expect any answer from the fun() 
    // {
    //     cout<<"I am Sam D2";
    // }


// 2nd Program funtion:

    // bool Prime(int n) // int n is parameter
    // bool Prime(int n = 7) // Default parameter, if no arguemnt are passed while calling it then it will accept it by default 7
    // {
        
    //     if (n<2)
    //     {
    //         return 0;
    //     }
        
    //     for ( int i = 2; i < n; i++)
    //     {
    //         if (n % i == 0)
    //         return 0; 
    //     }
    //     return 1;
    // }

    // void Prime1(int n = 7)  // return type is void so , no return 0 , only return and cout<<0
    // {
        
    //     if (n<2)
    //     {
    //         cout<<0<<endl;
    //         return ;
    //     }
        
    //     for ( int i = 2; i < n; i++)
    //     {
    //         if (n % i == 0)
    //         {
    //             cout<<0<<endl;
    //             return ; 
    //         }
    //     }
    //     cout<<1<<endl;
    //     return ;
    // }


    // int Fact(int n)
    // {
    //     int ans = 1, i;
    //     for ( i = 1; i <= n; i++)
    //     {
    //         ans = ans * i;
    //     }
    //     return ans;

    // }




// 3rd Program Function

// 1) Call by value : No swapping done here

void Swap_V(int m, int n) // it points to the memory location of parameter m and n not to the memory location of passed argument, So no swapping
{
    int temp;
    temp = m;
    m = n;
    n = temp;

}


// 2) Pass by reference : swapping will be done here

void Swap_R(int &m, int &n) // "&" is used and it points to the memory location of passed arguments
{
    int temp;
    temp = m;
    m = n;
    n = temp;
    
}

// 3) Function Overloading:

void Swap_R(float &m, float &n)
{
    float temp;
    temp = m;
    m = n;
    n = temp;
}

int main()
{

    // 1st Program
    // Program for sum , mul, sub of number using function

    // int a , b;

    // cout<<"Enter value of a and b: \n";
    // cin>>a>>b;

    // Function call:

    // cout<<Sum(a,b);
    // cout<<endl;
    // It can also be written like this:
    // int ans = Sum(a, b);
    // cout<<ans<<"\n";
    
    // cout<<"Multiplication of "<<a<< " and "<<b<<" is "<<Mul(a,b);
    // cout<<endl;
    
    // fun(); // return type is void 
    // // cout<<fun(); // It will generate error. like, error: forming reference to void
    // cout<<endl;

    // Sub(a, b); // return type is void 
    // cout<<"\n";




    // 2nd Program requriment:
    // a is prime or not 
    // a ka factorial
    // b is prime or not 
    // b ka factorial
    // b-a is prime or not 
    // b-a ka factorial

    // int a, b;
    // cout<<"Enter value of a and b: \n";
    // cin>>a>>b;

    // // a is prime or not 
    // cout<<Prime(a); // here a is argument
    // cout<<endl;
    // // a ka factorial
    // cout<<Fact(a);
    // cout<<endl;
    // // b is prime or not 
    // cout<<Prime(b);
    // cout<<endl;
    // // b ka factorial
    // cout<<Fact(b);
    // cout<<endl;
    // // b-a is prime or not 
    // cout<<Prime(b-a);
    // cout<<endl;
    // // b-a ka factorial
    // cout<<Fact(b-a);
    // cout<<endl;

    // Prime1(b); // No need of cout<< statement
    // cout<<endl; 





    // 3rd Program:

    // call by value and call by reference


    // Swapping of two int numbers
    // int a, b;
    // cout<<"Enter 2 numbers:  \n";
    // cin>>a>>b;

    // Swap_V(a, b); // Call by value function
    // cout<<a<<" "<<b<<" "; // No swaping done here
    // cout<<endl;
    
    // Swap_R(a, b); // Pass by reference function
    // cout<<a<<" "<<b; // No swaping done here
    // cout<<endl;


    // Function Overloading: 1 type ke 2 function but they are different in argument
    // Same function name but different argument 
    float x, y;
    cout<<"Enter 2 numbers:  \n";
    cin>>x>>y;

    // Swap_R(x,y);
    // cout<<x<<" "<<y; // No swaping done here
    
    swap(x,y); // It is predefined funtion 
    cout<<x<<" "<<y; // No swaping done here

}