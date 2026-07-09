#include <iostream>
#include <string>
using namespace std;

void uppercase(string &str, int i)
{
    if (i == str.size())
    {
        return;
    }

    if (str[i] >= 'a' && str[i] <= 'z')
    {
        str[i] = str[i] -'a'+'A';
    }
    cout << str[i];
    uppercase(str, i + 1);
}

int main()
{
    string str = "helloAachal";
    uppercase(str, 0);

    return 0;
}