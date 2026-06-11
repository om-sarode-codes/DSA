#include <iostream>
using namespace std;

void bublesort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(int);

    bublesort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}