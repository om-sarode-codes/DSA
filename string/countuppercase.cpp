#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{

    string str = "HeLLo";
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            count++;
        }
    }
    cout << count;
    return 0;
}