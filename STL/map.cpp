#include <bits/stdc++.h>
using namespace std;

int main()
{
    // only for understanding purpose (There will be not a output of this Programm)

    map<int, int> mpp;

    map<int, pair<int, int>> mpp;

    map< pair<int, int>, int> mpp;


    mpp[1] = 2;
    mpp.emplace({3, 1});

    mpp.insert({2, 4});

    mpp[{2, 3}] = 10;

    {
        {1, 2}
        {2, 4}
        {3, 1}
    }

    for (auto it : mpp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<map[1];
    cout<<map[5];

    auto it = mpp.find(3);
    cout<<*(it).second;

    auto it = mpp.find(5);

    //This is the syntax
    auto it = mpp.lower_bound(2);

    auto it = mpp.upper_bound(3);

    //erase, swap, size, empty are same as other
    
    return 0;
}