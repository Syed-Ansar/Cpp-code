#include <iostream>
using namespace std;
int recursiveFact(int n)
{
    if (n == 0)
        return 1;
    return n * recursiveFact(n - 1);
}
int main()
{
    cout << recursiveFact(10);
    return 0;
}