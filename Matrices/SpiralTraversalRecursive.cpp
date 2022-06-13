#include <bits/stdc++.h>

using namespace std;

// Time Complexity--> O(n*m); n=number of rows, m=number of columns  Space Complexity--> O(k); k=number of recursive calls made.

void spiralTraversal(vector<vector<int>> &v, int row_start, int row_end, int col_start, int col_end)
{
    if (row_start <= row_end && col_start <= col_end)
    {
        for (int i = col_start; i <= col_end; i++)
        {
            cout << v[row_start][i] << " ";
        }
        row_start++;
        for (int i = row_start; i <= row_end; i++)
        {
            cout << v[i][col_end] << " ";
        }
        col_end--;
        if (row_start <= row_end)
        {
            for (int i = col_end; i >= col_start; i--)
            {
                cout << v[row_end][i] << " ";
            }
            row_end--;
        }
        if (col_start <= col_end)
        {
            for (int i = row_end; i >= row_start; i--)
            {
                cout << v[i][col_start] << " ";
            }
            col_start++;
        }
        spiralTraversal(v, row_start, row_end, col_start, col_end);
    }
    return;
}

int main()
{
    vector<vector<int>> v;
    int rows, columns;
    cin >> rows >> columns;

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
    spiralTraversal(v, 0, rows - 1, 0, columns - 1);
    return 0;
}