#include <iostream>
using namespace std;

// Naive Solution with O min(a,b) complexity
// int gcdHcf(int a, int b)
// {
//     int ans = min(a, b);
//     while (ans > 0)
//     {
//         if (a % ans == 0 && b % ans == 0)
//         {
//             break;
//         }
//         ans--;
//     }
//     return ans;
// }

//Euclidian Algorithm

// int gcdHcf(int a, int b)
// {
//     while (a != b)
//     {
//         if (a > b)
//         {
//             a = a - b;
//         }
//         else
//         {
//             b = b - a;
//         }
//     }
//     return a;
// }

//Euclidian Algorithm Optimised Solution
int gcdHcf(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcdHcf(b, a % b);
}

int main()
{
    cout << gcdHcf(12, 15);
    return 0;
}