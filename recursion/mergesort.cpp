#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int st, int end, int mid) {
    vector<int> temp;

    int i = st;
    int j = mid + 1;

    // Dono halves ko merge karo
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }

    // Left half ke bache hue elements
    while (i <= mid) {
        temp.push_back(arr[i++]);
    }

    // Right half ke bache hue elements
    while (j <= end) {
        temp.push_back(arr[j++]);
    }

    // Original array me copy karo
    int x = 0;
    for (int idx = st; idx <= end; idx++) {
        arr[idx] = temp[x++];
    }
}

void mergesort(int arr[], int st, int end) {
    if (st >= end) {
        return;
    }

    int mid = st + (end - st) / 2;

    // Left part
    mergesort(arr, st, mid);

    // Right part
    mergesort(arr, mid + 1, end);

    // Merge
    merge(arr, st, end, mid);
}

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr[] = {5, 7, 8, 6, 9, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Sorting: ";
    printArr(arr, n);

    mergesort(arr, 0, n - 1);

    cout << "After Sorting: ";
    printArr(arr, n);

    return 0;
}