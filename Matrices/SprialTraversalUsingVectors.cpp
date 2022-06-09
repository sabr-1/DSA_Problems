#include <bits/stdc++.h>
using namespace std;
vector<int> spiralTraversal(vector<vector<int>> &v)
{
    int row_start = 0, row_end = v.size() - 1, column_start = 0, column_end = v[0].size() - 1;
    vector<int> spiral;
    while (row_start <= row_end && column_start <= column_end)
    {
        for (int i = column_start; i <= column_end; i++)
        {
            spiral.push_back(v[row_start][i]);
        }
        row_start++;
        for (int i = row_start; i <= row_end; i++)
        {
            spiral.push_back(v[i][column_end]);
        }
        column_end--;
        if (row_start <= row_end)
        {
            for (int i = column_end; i >= column_start; i--)
            {
                spiral.push_back(v[row_end][i]);
            }
            row_end--;
        }
        if (column_start <= column_end)
        {
            for (int i = row_end; i >= row_start; i--)
            {
                spiral.push_back(v[i][column_start]);
            }
            column_start++;
        }
    }
    return spiral;
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
    vector<int> spiral = spiralTraversal(v);
    for (int i = 0; i < spiral.size(); i++)
    {
        cout << spiral[i] << " ";
    }
    cout << endl;

    return 0;
}