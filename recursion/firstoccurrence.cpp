#include <iostream>
#include <vector>
using namespace std;
int firstoccurrenc(vector<int> arr, int n, int i, int target)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == target)
    {
        return i;
    }
    return firstoccurrenc(arr, n, i + 1, target);
}

int main()
{
    vector<int> arr = {5, 2, 45, 614, 2};
    cout << firstoccurrenc(arr, arr.size(), 0, 45);
}