#include <bits/stdc++.h>

using namespace std;

// Time Complexity--> O(r*c(log(r*c))) Space Complexity--> O(r*c).

int median(vector<vector<int>> &v, int r, int c)
{
    vector<int> arr;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr.push_back(v[i][j]);
        }
    }
    sort(arr.begin(), arr.end());
    return arr[((r * c) - 1) / 2];
}

int main()
{
    int rows, columns;
    cin >> rows >> columns;
    vector<vector<int>> arr;
    for (int i = 0; i < rows; i++)
    {
        arr.push_back(vector<int>());
        for (int j = 0; j < columns; j++)
        {
            int x;
            cin >> x;
            arr[i].push_back(x);
        }
    }

    cout << median(arr, rows, columns);
}