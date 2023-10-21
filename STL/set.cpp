#include <bits/stdc++.h>
using namespace std;

int main()
{
    // only for understanding purpose (There will be not a output of this Programm)
        // everything happen in log(n) time complexity
        //Set = Everything is sorted and unique
        
    set<int> st;
    st.insert(1); //{1}
    st.emplace(2); // {1, 2}
    st.insert(2); //{1, 2}
    st.insert(4); //{1, 2, 4}
    st.insert(3); //{1, 2, 3, 4}

    // Functionality of insert in vector
    // can be used also, that only increases efficienty

    // begin(), end(), rbegin(), rend(), size(), empty() and swap() are same as those of above
    
    //{1, 2, 3, 4, 5}
    auto it = st.find(3); //return an iter

    //{1, 2, 3, 4, 5}
    auto it = st.find(6); //return a st.end()

    //{1, 4, 5}
    st.erase(5); //erase 5 // takes logarithmic time

    int cnt = st.count(1);

    auto it = st.find(3);
    st.erase(it); // it takes c onstant time

    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); //after erase {1, 4, 5} [first, last}

    //lower_bound and upper_bound() function works in the same way as in vector it does.

    //This is the syntax
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);

    return 0;
}