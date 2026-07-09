#include <iostream>
using namespace std;

void print(int n, int i)
{
    if (i > n)
    {
        return;
    }
    if (i % 2 == 0)
    {
        cout << i << endl;
    }
    print(n, i + 1);
}

int main()
{
    int n = 10;
    print(n, 1);

    return 0;
}