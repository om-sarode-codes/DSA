#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{

    string str = "I Love Cpp";
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]==' ')
        {
            count++;
        }
    }
    cout<<"count sapce  no : " << count;
    return 0;
}