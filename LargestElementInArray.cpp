#include <iostream>
using namespace std;

// Naive solution Time Complexity O(n^2);
// int largestElement(int arr[], int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         int flag = true;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[j] > arr[i])
//             {
//                 flag = false;
//                 break;
//             }
//         }
//         if (flag == true)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// Optimised solution Time complexity O(n)

int largestElement(int arr[], int n)
{
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[res])
        {
            res = i;
        }
    }
    return res;
}

int main()
{
    int arr[] = {5, 8, 20, 10, 100, 1000, 2000, 67};
    cout << largestElement(arr, 8);
    return 0;
}