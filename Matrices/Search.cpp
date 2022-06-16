#include <bits/stdc++.h>

using namespace std;

// Time Complexity --> O(nxm) Space Complexity --> O(1)

int arr[1000][1000];

pair<int, int> searchKey(int r, int c, int k)
{
    pair<int, int> ans = {-1, -1};
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == k)
            {
                ans.first = i;
                ans.second = j;
                return ans;
            }
        }
    }
    return ans;
}

int main()
{
    int rows, columns;
    cin >> rows >> columns;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> arr[i][j];
        }
    }
    int key;
    cin >> key;
    pair<int, int> ans = searchKey(rows, columns, key);
    cout << ans.first << " " << ans.second << endl;
    return 0;
}