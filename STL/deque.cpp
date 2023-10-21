#include <bits/stdc++.h>
using namespace std;

int main()
{
    // only for understanding purpose (There will be not a output of this Programm)

    deque<int> dq;

    dq.push_back(5);     //{5}
    dq.emplace_back(3);  //{5, 3}
    dq.push_front(9);    //{9, 5, 3}
    dq.emplace_front(4); //{4, 9, 5, 3}

    dq.pop_back();  //{4, 9, 5}
    dq.pop_front(); //{9, 5}

    dq.back();
    dq.front();

    // rest functions same as vector
    // begin, end, rbegin, rend, insert, clear, size, swap

    return 0;
}