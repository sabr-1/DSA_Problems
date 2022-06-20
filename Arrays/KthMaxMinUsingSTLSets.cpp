#include <bits/stdc++.h>

using namespace std;

// Time Complexity--> O(nlog(n)) Space Complexity--> O(n).
int main()
{
    int size;
    cin >> size;
    set<long long> s;
    for (int i = 0; i < size; i++)
    {
        long long x;
        cin >> x;
        s.insert(x);
    }
    int k;
    cin >> k;
    auto max = s.end();
    for (int i = 1; i <= k; i++)
    {
        max--;
    }
    cout << *(max) << " ";

    auto min = s.begin();
    for (int i = 1; i < k; i++)
    {
        min++;
    }
    cout << *(min) << endl; // kth Min
}