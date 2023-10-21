#include <bits/stdc++.h>
using namespace std;

 // only for understanding purpose (There will be not a output of this Programm)bool comp(pair<int, int> p1, pair<int, int> p2)

{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    // they are same

    if (p1.first > p2.first)
        return true;
    return false;
}

int main()
{
    sort(a, a + n);
    sort(v.begin(), v.end());

    sort(a + 2, a + 4);

    sort(a, a + n, greater<int>);

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    // sort it according to second element
    // if second element is same, then sort it according to first element but descending

    sort(a, a + n, comp);

    // {4,1}, {2, 1}, {1, 2}

    return 0;
}
