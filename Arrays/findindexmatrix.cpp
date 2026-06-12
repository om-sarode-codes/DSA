#include <iostream>
using namespace std;

void findidx(int arr[3][3], int n, int m, int key)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == key)
            {
                cout<<"idx no = " <<" row :- "<< i << " " <<"col :- "<< j;
            }
        }
    }
}
int main()
{

    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    int n = 3;
    int m = 3;
    findidx(arr, n, m, 7);
    return 0;
}