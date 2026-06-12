#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[3][3] = {{131, 42, 43},
                     {44, 54, 67},
                     {77, 84, 49}};
    int n = 3;
    int m = 3;

    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] < min)
            {
                min= arr[i][j];
            }
        }
    }
    cout <<"smallest el : "<< min;
}