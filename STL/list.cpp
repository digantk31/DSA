#include <bits/stdc++.h>
using namespace std;

int main()
{
    // only for understanding purpose (There will be not a output of this Programm)

    list<int> ls;

    ls.push_back(5); //{5}
    ls.emplace_back(3); //{5, 3}

    ls.push_front(9); //{9, 5, 3}
    ls.emplace_front();
    
    // rest functions same as vector
    // begin, end, rbegin, rend, insert, clear, size, swap

    return 0;
}