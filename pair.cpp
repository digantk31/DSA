#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<char, int> p = {'a', 4};
    cout << p.first << " " << p.second << endl;
    // output: a 4

    pair<int, pair<int, int>> pa = {1, {2, 3}};
    cout << pa.first << " " << pa.second.second << pa.second.first << endl;
    // output: 1 32

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {9, 8}};
    cout << arr[1].first;
    // output: 3
    return 0;
}
