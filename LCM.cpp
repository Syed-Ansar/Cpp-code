#include <iostream>
using namespace std;

// Naive solution O(a*b - max(a,b))
// int lcm(int a, int b)
// {
//     int ans = max(a, b);
//     while (true)
//     {
//         if (ans % a == 0 && ans % b == 0)
//             return ans;
//         ans++;
//     }
//     return ans;
// }

// Optimised solution using Euclidian Algorithm

// (a * b) = gcd(a,b)*lcm(a,b)

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a * b) / gcd(b, a % b);
}

int main()
{
    gcd(4, 5);
    cout << lcm(4, 5);
    return 0;
}