#include <bits/stdc++.h>

using namespace std;

// Time Complexity--> O(nlog(n)) Space Complexity--> O(n).

int main()
{
    int size;
    cin >> size;
    map<long long, int> m;
    for (int i = 0; i < size; i++)
    {
        long long x;
        cin >> x;
        m[x]++;
    }
    int k;
    cin >> k;
    auto max = m.end();
    for (int i = 1; i <= k; i++)
    {
        max--;
    }
    cout << max->first << " ";

    auto min = m.begin();
    for (int i = 1; i < k; i++)
    {
        min++;
    }
    cout << min->first << endl;
    return 0;
}