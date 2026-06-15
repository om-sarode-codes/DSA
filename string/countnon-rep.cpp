#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{

    string str = "aabbcdd";

    for (int i = 0; i < str.length(); i++)
    {
        int count = 0;
        for (int j = 0; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << str[i];
        }
    }

    // optimize solution !

    int feq[256] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        feq[str[i]]++;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (feq[str[i]] == 1)
        {
            cout << str[i];
            return 0;
        }
    }
    return 0;
}
