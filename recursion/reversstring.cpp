#include <iostream>
using namespace std;

void revers(string str, int i, int n)
{
    if (i == str.size())
    {
        return;
    }

    revers(str, i + 1, str.size());

    cout << str[i];
}
int main()
{
    string str = "helloaachal";
    revers(str, 0, str.size());
}