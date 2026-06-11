#include <iostream>
#include <climits>
using namespace std;

void maxsubarrays(int arr[], int n)
{
    int maxsum = INT_MIN;
    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            int cursum = 0;
            for (int i = st; i <= end; i++)
            {
                cursum += arr[i];
            }
            maxsum = max(cursum, maxsum);
        }
    }
    cout << "MAX SUM : " << maxsum;
}

int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    maxsubarrays(arr, n);
    return 0;
}