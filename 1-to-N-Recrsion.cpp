#include <iostream>
using namespace std;

int rec(int n)
{
    if (n == 0)
    {
        return 1;
    }
    rec(n - 1);
    cout << n << " ";
}

int main()
{
    rec(15);
    return 0;
}