#include <iostream>

using namespace std;

int countDigit(long long int x)
{
    long long int res = 0;
    while (x > 0)
    {
        x = x / 10;
        res++;
    }
    return res;
}

int main()
{
    cout << countDigit(200488);
    return 0;
}
