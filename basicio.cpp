#include<iostream>
#include<string>
using namespace std;

/*
copy this to C:\MinGW\include folder and include it as #include<basicio.cpp> in any cpp file
*/

template <class T>
void input(T& var,string prompt)
{
    /*
    usage example:
        int a;
        input(a,"Enter value of a:");
    
    takes a template refrence argument and inputs it via std::cin
       
    */
    cout<<prompt;
    cin>>var;
}

template <class T>
void print(T var, string end="\n")
{
    /*usage example:
    1.    
        int a=34;
        print(a);
    2.
        float amt=3.14;
        print(amt,"Rs.\n");
    
    takes a template argument by value and prints it to screen using std::cout*/
    cout<<var<<end;
}

void print(){cout<<"\n";} //just for mere purpose of printing a newline