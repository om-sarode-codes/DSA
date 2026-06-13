#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{

    string str = "hello my nam isom";
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
    cout<<"count vowels : " << vowels;

    return 0;
}


int main()
{

    string str = "hello my nam is om";

    int vowels = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowels++;
        }
    }
    cout <<"count vowels : "<< vowels;

    return 0;
}