/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
unsigned long long power(unsigned int , unsigned int );

int main()
{
    int base, n, result;

    cout << "Enter base number: ";
    cin >> base;

    cout << "Enter power number(positive integer): ";
    cin >> n;

    result = power(base, n);
    cout << base << "^" << n << " = " << result;

    return 0;
}
unsigned long long power(unsigned int base, unsigned int n)
{
    if (n != 0)
        return (base*power(base, n-1));
    else
        return 1;
}

