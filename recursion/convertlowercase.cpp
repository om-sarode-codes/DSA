#include <iostream>
#include <string>

using namespace std;
void convertlower(string &str, int i)
{
    if (i == str.size())
    {
        return;
    }

    if (str[i] >= 'A' && str[i] <= 'Z')
    {
        str[i] = str[i] -'A'+'a';
    }
    cout << str[i];
    convertlower(str, i + 1);
}

int main()
{
    string str = "HeLLO AAchal";
    convertlower(str, 0);
}