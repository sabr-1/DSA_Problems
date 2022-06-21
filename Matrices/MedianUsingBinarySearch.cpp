#include <bits/stdc++.h>

using namespace std;

// Time Complexity--> O(32*r*log(c)) Space Complexity--> O(1).
// Matrix is row wise sorted.

int median(vector<vector<int>> &v, int r, int c)
{
    int low = v[0][0], high = v[0][c - 1];
    for (int i = 1; i < r; i++)
    {
        if (v[i][0] < low)
        {
            low = v[i][0];
        }
        if (v[i][c - 1] > high)
        {
            high = v[i][c - 1];
        }
    }
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        int count = 0;
        for (int i = 0; i < r; i++)
        {
            count += (upper_bound(v[i].begin(), v[i].end(), mid) - v[i].begin());
        }
        if (count < (r * c + 1) / 2)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return low;
}

int main()
{
    int rows, columns;
    cin >> rows >> columns;
    vector<vector<int>> v;
    for (int i = 0; i < rows; i++)
    {
        v.push_back(vector<int>());
        for (int j = 0; j < columns; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    cout << median(v, rows, columns) << endl;
    return 0;
}