#include <iostream>
using namespace std;

int partition(int arr[], int st, int end)
{

    int pivot = arr[end];
    int i = st - 1;
    for (int j = st; j < end; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    i++;
    swap(arr[i], arr[end]);
    return i;
}

void quicksort(int arr[], int st, int end)
{
    if (st >= end)
    {
        return;
    }
    int pivotidx = partition(arr, st, end);

    quicksort(arr, st, pivotidx - 1);
    quicksort(arr, pivotidx + 1, end);
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
    int arr[] = {5, 2, 8, 1, 7, 6, 3};
    int n = 7;
    quicksort(arr, 0, n - 1);
    printarr(arr, n);
}