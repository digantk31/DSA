#include <bits/stdc++.h>
using namespace std;

int main()
{
    // How many 1's and sets are there in binary
    int num1 = 7;
    cout << __builtin_popcount(num1); // 3

    long long num2 = 165786578687;
    cout << __builtin_popcount(num2); // 21

    return 0;
}
