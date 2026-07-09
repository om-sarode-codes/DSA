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
        str[i] = str[i] + 32;
    }
    cout << str[i];
    convertlower(str, i + 1);
}

int main()
{
    string str = "Hello AAchal";
    convertlower(str, 0);
}