#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    string str1 = "anagram";
    string str2 = "nagaram";

    if (str1.length() != str2.length())
    {
        cout << "not anagram";
        return false;
    }
    int count[26] = {0};

    for (int i = 0; i < str1.length(); i++)
    {

        count[str1[i] - 'a']++;
    }
    for (int i = 0; i < str2.length(); i++)
    {
        if (count[str2[i] - 'a'] == 0)
        {
            cout << "not aanagram";
            return false;
        }
        else
        {
            count[str2[i] - 'a']--;
        }
    }
    cout << "vaid anagram";
    return 0;
}