#include <bits/stdc++.h>

using namespace std;

// Time Complexity--> O(r*c)  Space Complexity--> O(1).

int rowWithMax1s(vector<vector<int>> &v)
{
    int r = v.size();
    int c = v[0].size();
    int ans = -1, max1s = 0;
    for (int i = 0; i < r; i++)
    {
        int countOf1 = 0;
        for (int j = 0; j < c; j++)
        {
            if (v[i][j] == 1)
            {
                countOf1++;
            }
        }
        if (countOf1 > max1s)
        {
            max1s = countOf1;
            ans = i;
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