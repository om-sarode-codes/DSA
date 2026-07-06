#include <iostream>
#include <vector>
using namespace std;
int lastoccurrence(vector<int> arr, int n, int i, int target)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == target)
    {
        return i;
    }

    return lastoccurrence(arr, n, i - 1, target);
}
int main()
{
    vector<int> arr = {15, 5, 5, 5, 7, 8, 9};
    cout << lastoccurrence(arr, arr.size(), arr.size() - 1, 5);

    return 0;
}