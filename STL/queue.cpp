#include <bits/stdc++.h>
using namespace std;

int main()
{
    // only for understanding purpose (There will be not a output of this Programm)

    queue<int> q;

    q.push(5);    //{5}
    q.push(10);   //{5, 10}
    q.emplace(3); //{5, 10, 3}

    q.back() += 4;
    // q is {5, 10, 7}
    cout << q.back(); // 7

    cout << q.front(); // 5

    q.pop();

    // q is {10, 7}
    cout << q.front(); // 10

    // size, swap and empty same as stack
    return 0;
}