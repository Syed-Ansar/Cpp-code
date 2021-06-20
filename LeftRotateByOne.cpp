#include <iostream>
using namespace std;

// theta(n) Time complexity and theta(1) auxilary space
void Leftrotate(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
        arr[i - 1] = arr[i];
    arr[n - 1] = temp;
}

int main()
{
    int n = 8;
    int arr[] = {10, 2, 3, 4, 5, 8, 0, 89};
    Leftrotate(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}