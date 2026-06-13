#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{

    char ch[] = "racecar";

    int st = 0;
    int end = strlen(ch) - 1;
    while (st <= end)
    {
        if (ch[st] != ch[end])
        {
            cout << "this is not palindrome";
            return 0;
        }
        st++;
        end--;
    }
    cout << "this is palindrome";
    return 0;
}