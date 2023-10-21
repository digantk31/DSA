#include <bits/stdc++.h>
using namespace std;

int main()
{
    // only for understanding purpose (There will be not a output of this Programm)

    stack<int> st;

    st.push(3);     //{3}
    st.push(4);     //{4, 3}
    st.push(5);     //{5, 4, 3}
    st.push(9);     //{9, 5, 4 ,3}
    st.emplace(15); //{15, 9, 5, 4, 3}

    cout << st.top(); // 15   "** st[2] is invalid **"

    st.pop(); // st look like {9, 5, 4, 3}

    cout << st.top();   // 9
    cout << st.size();  // 4
    cout << st.empty(); // 0

    stack<int> st1, st2;
    st1.swap(st2); // for swaping stacks
    return 0;
}