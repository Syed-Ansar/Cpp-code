#include <iostream>
using namespace std;

// Naive solution O(n^2) complexity
// int sortedOrNot(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//         for (int j = i + 1; j < n; j++)
//             if (arr[j] < arr[i])
//                 return false;
//     return true;
// }

bool sortedOrNot(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
            return false;
    }

    return true;
}

int main()
{
    int arr[] = {3, 5, 6, 7, 9};
    cout << sortedOrNot(arr, 5);
    return 0;
}