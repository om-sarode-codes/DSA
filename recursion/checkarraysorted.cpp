#include <iostream>
#include <vector>
using namespace std;

bool issorted(vector<int> arr, int n, int i)
{
    if (i == n - 1)
    {
        return true;
    }
    if (arr[i] > arr[i + 1])
    {
        return false;
    }
    return issorted(arr, n, i + 1);
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};
    cout << issorted(arr, 5, 0);
}