#include <iostream>
using namespace std;

// It is naive solution with O(n) complexity but it is not efficient solution
//
// int trailingZeros(int n)
// {
//     int fact = 1;
//     for (int i = 2; i <= n; i++)
//         fact = fact * i;

//     int res = 0;
//     while (fact % 10 == 0)
//     {
//         res++;
//         fact = fact / 10;
//     }
//     return res;
// }

// Efficient solution O(log n) solution

int trailingZeros(int n)
{
    int res = 0;
    for (int i = 5; n / i >= 1; i *= 5)
    {
        res = res + n / i;
    }
    return res;
}

int main()
{
    cout << trailingZeros(30);
    return 0;
}