#include <iostream>
#include <limits.h>
using namespace std;

bool isPal(string str, int start, int end)
{
    if (start >= end)
        return true;
    return ((str[start] == str[end]) && isPal(str, start + 1, end - 1));
}

int main()
{
    string s = "saas";
    cout << (isPal(s, 0, s.length() - 1) ? "true" : "false");

    return 0;
}