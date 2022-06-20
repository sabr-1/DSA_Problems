#include <bits/stdc++.h>

using namespace std;

// Time Complexity--> O(nlog(n)) (because of sorting)  Space Complexity--> O(1)
// You can either use inbuilt sort function or define your own.

pair<long long, long long> kthMaxMin(vector<long long> &v, int k)
{
    sort(v.begin(), v.end());
    pair<long long, long long> kthMaxMinPair = {v[v.size() - k], v[k - 1]};
    return kthMaxMinPair;
}

int main()
{
    int size;
    cin >> size;
    vector<long long> v;
    for (int i = 0; i < size; i++)
    {
        long long x;
        cin >> x;
        v.push_back(x);
    }
    int k;
    cin >> k;
    pair<long long, long long> kthMaxMinPair = kthMaxMin(v, k);
    cout << kthMaxMinPair.first << " " << kthMaxMinPair.second << endl;
    return 0;
}