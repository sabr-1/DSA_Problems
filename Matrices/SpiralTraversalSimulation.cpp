#include <bits/stdc++.h>

using namespace std;

// Time Complexity--> O(n) Space Complexity--> O(n); n=number of elements in the matrix.

vector<int> spiralSimulation(vector<vector<int>> &v)
{
    int rows = v.size(), columns = v[0].size();
    vector<vector<bool>> seen(rows, vector<bool>(columns, false));
    vector<int> spiral;
    int rowDirection[] = {0, 1, 0, -1};
    int colDirection[] = {1, 0, -1, 0};
    int i = 0, j = 0, directionIndex = 0;
    for (int k = 0; k < rows * columns; k++)
    {
        spiral.push_back(v[i][j]);
        seen[i][j] = true;
        int newX = i + rowDirection[directionIndex];
        int newY = j + colDirection[directionIndex];
        if ((newX >= 0 && newX < rows) && (newY >= 0 && newY < columns) && !seen[newX][newY])
        {
            i = newX;
            j = newY;
        }
        else
        {
            directionIndex = (directionIndex + 1) % 4;
            i += rowDirection[directionIndex];
            j += colDirection[directionIndex];
        }
    }
    return spiral;
}

int main()
{

    int rows, columns;
    cin >> rows >> columns;
    vector<vector<int>> v(rows, vector<int>(columns));
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> v[i][j];
        }
    }

    for (auto element : spiralSimulation(v))
    {
        cout << element << " ";
    }

    return 0;
}