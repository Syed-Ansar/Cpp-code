#include <iostream>
using namespace std;

int N_to_1(int n)
{
    if (n == 0)
        return 1;
    cout << n << " ";
    return N_to_1(n - 1);
}

int main()
{
    N_to_1(15);
    return 0;
}