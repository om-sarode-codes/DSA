#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int st, int end, int mid)
{
    vector<int> temp;

    int i = st;
    int j = mid + 1;

    while (i <= mid && j <= end)
    {
        if (arr[i] >= arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= end)
    {
        temp.push_back(arr[j++]);
    }

    int x = 0;
    for (int idx = st; idx <= end; idx++)
    {
        arr[idx] = temp[x++];
    }
}

void mergesort(int arr[], int st, int end)
{
    if (st >= end)
    {
        return;
    }
    int mid = (st + end) / 2;

    mergesort(arr, st, mid);
    mergesort(arr, mid + 1, end);
    merge(arr, st, end, mid);
}
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {5, 7, 8, 6, 9, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergesort(arr, 0, n - 1);
    printarr(arr, n);
    return 0;
}