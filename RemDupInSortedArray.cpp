#include <iostream>
#include <cmath>
using namespace std;

// {1,2,2,3,3}
int remDup(int arr[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[res - 1] != arr[i])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}
// res = 1 , i = 1
// res = 2 , i = 2
// res = 3 , i = 3
// res = 4 , i = 4
// res = 4 , i = 5
// res = 4 , i = 6
// res = 4 , i = 7
// result res = 4;

int main()
{
    int n = 7;
    int arr[] = {10, 15, 20, 25, 30, 30, 30};
    n = remDup(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}