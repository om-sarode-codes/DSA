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
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count++;
        }
    }
    cout<<"lower case  no : " << count;
    return 0;
}