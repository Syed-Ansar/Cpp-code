#include <iostream>
using namespace std;

// Time Complexity (Theta of n) and (Theta of n) auxilary space
int getSum(int n)
{
    if (n == 0)
        return 0;

    return (n + getSum(n - 1));
}
int main()
{
    int a = 15;
    cout << getSum(a);
    return 0;
}