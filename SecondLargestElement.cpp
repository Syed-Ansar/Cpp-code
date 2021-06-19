#include <iostream>
using namespace std;

//  Naive solution Time Complexity O(n^2)

// int largestElement(int arr[], int n)
// {
//     int res = 0;
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] > arr[res])
//         {
//             res = i;
//         }
//     }
//     return res;
// }

// int secondLargest(int arr[], int n)
// {
//     int largest = largestElement(arr, n);
//     int res = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != arr[largest])
//         {
//             if (res == -1)
//             {
//                 res = i;
//             }
//             else
//             {
//                 if (arr[i] > arr[res])
//                 {
//                     res = i;
//                 }
//             }
//         }
//     }
//     return res;
// }

// 5,8,20,10
// 1st iteration => // res = 0; // largest = 1
// 2nd Iteration => // res = 1; // largest = 2
// 3rd Iteration => // res = 3; // largest = 2
// Optimised solution Time Complexity O(n)

int secondLargest(int arr[], int n)
{
    int res = -1, largest = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if (arr[i] != arr[largest])
        {
            if (res == -1 || arr[i] > arr[res])
                res = i;
        }
    }
    return res;
}

int main()
{
    int arr[] = {5, 8, 20, 10};
    cout << secondLargest(arr, 5);
    return 0;
}