#include <bits/stdc++.h>

using namespace std;

// Time Complexity--> O(r+c) Space Complexity--> O(1).

int rowWithMax1s(vector<vector<int>> &v)
{
    int r = v.size();
    int c = v[0].size();
    int ans = -1, max1s = 0;
    int i = 0, j = 0;
    while (i < r && j < c)
    {
        if (v[i][j] == 1)
        {
            if (c - j > max1s)
            {
                max1s = c - j;
                ans = i;
            }
            i++;
            j = 0;
        }
        else
        {
            if (j < c - 1)
            {
                j++;
            }
            else
            {
                i++;
                j = 0;
            }
        }
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