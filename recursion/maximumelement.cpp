#include <iostream>
#include <vector>
using namespace std;

int findmax(int arr[], int i, int n)
{
    if (i == n - 1)
    {
        return arr[i];
    }
    int ans = findmax(arr, i + 1, n);
    return max(arr[i], ans);
}

int main()
{

    int arr[] = {2, 4, 8, 9, 58, 5, 4, 7};
    int n = sizeof(arr) / sizeof(int);
    cout << findmax(arr, 0, n);

    return 0;
}