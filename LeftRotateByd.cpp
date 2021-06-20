#include <iostream>
using namespace std;

// theta(nd) where d is no of digits to be rotated, Time complexity and theta(1) auxilary space
// void Leftrotate(int arr[], int n)
// {
//     int temp = arr[0];
//     for (int i = 0; i < n; i++)
//         arr[i - 1] = arr[i];
//     arr[n - 1] = temp;
// }

// theta(n) where d is no of digits to be rotated, Time complexity and theta(d) auxilary space
// void LeftRotateByd(int arr[], int n, int d)
// {
//     int temp[d];
//     for (int i = 0; i < d; i++)
//         temp[i] = arr[i];
//     for (int i = d; i < n; i++)
//         arr[i - d] = arr[i];
//     for (int i = 0; i < d; i++)
//         arr[n - d + i] = temp[i];
// }

void reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[high], arr[low]);
        low++;
        high--;
    }
}

void LeftRotateByd(int arr[], int n, int d)
{
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}

int main()
{
    int n = 8;
    int arr[] = {10, 2, 3, 4, 5, 8, 0, 89};
    int d = 2;
    int low = 0;
    int high = n - 1;
    LeftRotateByd(arr, n, d);
    // for (int i = 0; i < d; i++)
    // {
    //     Leftrotate(arr, n, d);
    // }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}