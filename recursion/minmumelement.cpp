#include <iostream>
#include <vector>
using namespace std;

int findmin(int arr[], int i, int n)
{
    if (i == n - 1)
    {
        return arr[i];
    }

    int ans = findmin(arr, i + 1, n);
    return min(arr[i], ans);
}

int main()
{

    int arr[] = {22, 44, 48, 97, 58, 54, 47, 77};
    int n = sizeof(arr) / sizeof(int);
    cout << findmin(arr, 0, n);

    return 0;
}