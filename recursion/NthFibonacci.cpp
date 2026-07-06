#include <iostream>
using namespace std;
int NthFibonacci(int n)
{

    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return NthFibonacci(n - 1) + NthFibonacci(n - 2);
}

int main()
{

    cout << NthFibonacci(6);
}