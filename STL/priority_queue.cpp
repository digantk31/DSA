#include <bits/stdc++.h>
using namespace std;

int main()
{
    // only for understanding purpose (There will be not a output of this Programm)
        //push, pop = log(n)
        //top = O(1)
        
    // Max Heap
    priority_queue<int> pq;

    pq.push(5);    //{5}
    pq.push(2);    //{5, 2}
    pq.push(100);  //{100, 5, 2}
    pq.emplace(3); //{100, 5, 3, 2}

    cout << pq.top(); // 100

    pq.pop(); //{5, 3, 2}

    cout << pq.top(); // 5

    // size, swap and empty function same as others


    // Min Heap
    priority_queue<int, vector<int>, greater<int>> pq2;

    pq2.push(5);    //{5}
    pq2.push(2);    //{2, 5}
    pq2.push(100);  //{2, 5, 100}
    pq2.emplace(3); //{2, 3, 5, 100}

    cout << pq2.top(); // 2
    return 0;
}