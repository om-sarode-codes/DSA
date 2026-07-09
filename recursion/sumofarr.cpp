#include <iostream>
using namespace std;
int sum(int arr[], int n, int i)
{
    if (i == n - 1)
    {
        return arr[i];
    }

    return arr[i] + sum(arr, n, i + 1);
}

int main()
{
    int arr[] = {5, 4, 7, 5, 5};
    int n = sizeof(arr) / sizeof(int);
    cout << sum(arr, n, 0);
}