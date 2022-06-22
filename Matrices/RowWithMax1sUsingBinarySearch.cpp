#include <bits/stdc++.h>

using namespace std;

// Time Complexity--> O(r*log(c))  Space Complexity--> O(1) if binary search is iterative otherwise O(log(c)) .

int binarySearch(vector<int> &v)
{
    int low = 0, high = v.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (v[mid] == 1 && (v[mid - 1] == 0 || mid == 0))
        {
            return mid;
        }
        else if (v[mid] < 1)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int recursiveBinarySearch(vector<int> &v, int l, int h)
{
    if (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (v[mid] == 1 && (v[mid - 1] == 0 || mid == 0))
        {
            return mid;
        }
        else if (v[mid] < 1)
        {
            return recursiveBinarySearch(v, mid + 1, h);
        }
        else
        {
            return recursiveBinarySearch(v, l, mid - 1);
        }
    }
    return -1;
}

int rowWithMax1s(vector<vector<int>> &v)
{
    int r = v.size();
    int c = v[0].size();
    int ans = -1, max1s = 0;
    for (int i = 0; i < r; i++)
    {
        int idxOf1 = recursiveBinarySearch(v[i], 0, v[i].size() - 1), numOf1s = 0;
        if (idxOf1 != -1 && c - idxOf1 > max1s)
        {
            max1s = c - idxOf1;
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