#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{

    string str = "hello my nam is om";
    string str2 = "aeiou";

    int vowels = 0;

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < str2.length(); j++)
        {
            if (str[i] == str2[j])
            {
                vowels++;
            }
        }
    }
    cout << vowels;

    return 0;
}