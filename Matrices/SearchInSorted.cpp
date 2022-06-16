#include <bits/stdc++.h>

using namespace std;

// Array must be sorted row and column wise.
// Time Complexity--> O(n+m) Space Complexity--> O(1)

int arr[1000][1000];

pair<int, int> searchKey(int r, int c, int k)
{
    pair<int, int> ans = {-1, -1};
    int i = 0, j = c - 1;
    if (r == 0 || c == 0)
    {
        return ans; // When Array has zero rows or columns time complexity --> O(1).
    }
    if (k < arr[0][0] || k > arr[r - 1][c - 1])
    {
        return ans; // Improved Time Complexity for one of the worst case from O(n+m) to O(1).
    }
    while (i < r && j >= 0)
    {
        if (arr[i][j] == k)
        {
            ans.first = i;
            ans.second = j;
            return ans;
        }
        else if (arr[i][j] > k)
        {
            j--;
        }
        else
        {
            i++;
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
}