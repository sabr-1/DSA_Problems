#include <bits/stdc++.h>

using namespace std;

// Time Complexity--> O(r+c) Space Complexity--> O(1).

int rowWithMax1s(vector<vector<int>> &v)
{
    int r = v.size();
    int c = v[0].size();
    int ans = 0, j = c - 1;
    for (int i = 0; i < r; i++)
    {
        bool found = false;
        while (j >= 0 && v[i][j] == 1)
        {
            j--;
            found = true;
        }
        if (found)
        {
            ans = i;
        }
    }
    if (ans == 0 && v[0][c - 1] == 0)
    {
        return -1;
    }
    return ans;
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
    cout << rowWithMax1s(v) << endl;
    return 0;
}