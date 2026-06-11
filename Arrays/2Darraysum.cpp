#include <iostream>
using namespace std;

int main()
{
    int arr[4][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9},
                     {10, 11, 12}};

    int n = 4;
    int m = 3;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << "sum of 2D array : " << sum;
    return 0;
}