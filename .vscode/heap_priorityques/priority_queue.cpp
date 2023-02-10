#include <bits/stdc++.h>

using namespace std;

int main()
{
    // priority_queue<int, vector<int>> pq; // maxheap
    // pq.push(2);
    // pq.push(3);
    // pq.push(1);
    // cout << pq.top() << endl;
    // pq.pop();
    // cout << pq.top() << endl;
    // pq.pop();

    priority_queue<int, vector<int>, greater<int>> pqm; // minheap
    pqm.push(2);
    pqm.push(3);
    pqm.push(1);
    cout << pqm.top() << endl;
    pqm.pop();
    cout << pqm.top() << endl;
    // pqm.pop();
    return 0;
}