#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{

    char ch[] = "helloaachal";

    int st = 0;
    int end = strlen(ch) - 1;

    while (st <= end)
    {
        swap(ch[st++], ch[end--]);
    }
    cout << ch;

    return 0;
}