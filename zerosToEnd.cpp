#include <iostream>
using namespace std;

// 10,5,8,0,0,8,0;
// Naive solution O(n^2) Time
// int zeroesToEnd(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             for (int j = i + 1; j < n; j++)
//                 if (arr[j] != 0)
//                     swap(arr[i], arr[j]);
//         }
//     }
// }

// {10, 5, 8, 0, 0, 8, 0}
// at 1st 0 => count = 3;
// optimised solution with O(n) Time complexity.
int zeroesToEnd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
}

int main()
{
    int n = 7;
    int arr[] = {10, 5, 8, 0, 0, 8, 0};
    zeroesToEnd(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}