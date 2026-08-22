#include<iostream>
using namespace std;

int main()
{
    // Arithmetic Operators
    // {+, -, *, /, %}
    // {*, /, %} > {+, -} They have higher precedence than {+, -}
    // Associativity rule: Left to Right (if there are more than one operator with the same precedence, then we will evaluate from left to right)
    
    // cout<<18/5<<endl;
    // cout<<18.3/5<<endl;
    // cout<<18.3*5<<endl;
    // cout<<5*18.3<<endl;
    
    
    
    // int a=18;
    // cout<<a++<<endl; // 18
    // cout<<a<<endl;   // 19
    
    
    
    // int a=18;
    // int b= a++; 
    // cout<<b<<" "<<a<<endl; // 18 19
    
    
    
    // int a=18;
    // int b= ++a; 
    // cout<<b<<" "<<a<<endl; // 19 19
    
    // int a=18;
    // int b= a--; 
    // cout<<b<<" "<<a<<endl; // 18 17
    
    // int a=18;
    // int b= --a; 
    // cout<<b<<" "<<a<<endl; // 17 17
    
    
    
    // Comparison Operator
    // Yes or No (True or False) output , 1 or 0 output, 1 for true and 0 for false
    //{==, !=, >, <, >=, <=}
    // { >, <, >=, <=} > {==, !=} They have higher precedence than {==, !=}
    // Left to Right Associativity

    // int a, b;
    // cout<<"Enter the value of a: ";
    // cin>>a;
    // cout<<"Enter the value of b: ";
    // cin>>b;

    // == operator
    // if (a==b)
    // cout<<"Yes";
    // else
    // cout<<"No";
    
    // >, < operator
    // if (a>b)
    // cout<<"Yes";
    // else
    // cout<<"No";
    
    // < operator
    // if (a<b)
    // cout<<"Yes";
    // else
    // cout<<"No";
    
    // <= operator
    // if (a<=b)
    // cout<<"Yes";
    // else
    // cout<<"No";
    
    // >= operator
    // if (a>=b)
    // cout<<"Yes";
    // else
    // cout<<"No";

    // != operator
    // if (a!=b)
    // cout<<"Yes";
    // else
    // cout<<"No";



    // Logical Operators
    // {&&, ||, !} --> AND, OR, NOT
    // NOT > AND > OR 

    // int a, b, c;
    // cout<<"Enter the value of a, b and c: ";
    // cin>>a>>b>>c;

    // // AND operator
    // if (a>b && a>c)
    // cout<<"Yes, a is greater";

    // else
    // cout<<"No, a is not greater";


    // OR operator
    // char name;
    // cout<<"Enter a character: ";
    // cin>>name;

    // if (name=='a' || name=='e' || name=='i' || name=='o' || name=='u')
    // {
    //     cout<<"Yes, it is a vowel";
    // }
    // else
    // cout<<"No, it is not a consonant";


    // NOT operator

    // cout<<!18<<endl; // 0 , because 18 is a non-zero value, so it is considered true, and !true is false, which is represented as 0

    // cout<<!0<<endl;  // 1 , because 0 is considered false
    
    

    // Bitwise Operators
    // {&, |, ^, ~, <<, >>}
    // Bitwise AND (&)
    // Bitwise OR (|)
    // Bitwise complement (~) 
    // Bitwise XOR (^)
    // Left Shift operators (<< ) number * 2 to the power x
    // Right Shift operators (>>) number / 2 to the power x
    // {~} > {<<, >>} > {&, ^, |}



    // Bitwise AND (&)
    // int ans = 5 & 6; // 0101 & 0110 = 0100 (4 in decimal)
    // cout<<ans<<endl;

    // Bitwise OR (|)
    // int ans = 5 | 6; // 0101 | 0110 = 0111 (7 in decimal)
    // cout<<ans<<endl;

    // Bitwise XOR (^)
    // int ans = 5 ^ 6; // 0101 ^ 0110 = 0011 (3 in decimal)
    // cout<<ans<<endl;

    // Left Shift (<<)
    // int ans = 5 << 1; // 0101 << 1 = 1010 (10 in decimal)
    // cout<<ans<<endl;

    // Right Shift (>>)
    // int ans = 5 >> 1; // 0101 >> 1 = 0010 (2 in decimal)
    // cout<<ans<<endl;

    // Bitwise Complement (~)
    // int ans = ~5; // ~0101 = 1010 (in 2's complement, it is -6 in decimal)
    // cout<<ans<<endl;


    // Assignment Operators
    // {=, +=, -=, *=, /=, %=}

    int a = 18;

    // = operator
    // cout<<a<<endl; // 18

    // += operator
    // a += 5; // a = a + 5
    // cout<<a<<endl; // 23

    // -= operator
    // a -= 5; // a = a - 5
    // cout<<a<<endl; // 13

    // *= operator
    // a *= 5; // a = a * 5
    // cout<<a<<endl; // 90

    // /= operator
    a /= 5; // a = a / 5
    cout<<a<<endl; // 3
}