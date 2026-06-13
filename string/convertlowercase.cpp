#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[] = "APpLe";

    for (int i = 0; i < strlen(str); i++)
    {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z')
        {
            continue;
        }
        else
        {
            str[i] = ch - 'A' + 'a';
        }
    }
    cout << str;
    return 0;
}