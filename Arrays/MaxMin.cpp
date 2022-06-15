#include <bits/stdc++.h>

using namespace std;

// Iterative Method -------Time Complexity -->O(n)  Space Complexity --> O(1) --------
// Number of Comparisions --> n+n=2n

pair<int, int> maxMin(int a[], int s)
{
    pair<int, int> maxMinpair = {INT_MIN, INT_MAX};

    for (int i = 0; i < s; i++)
    {
        if (a[i] > maxMinpair.first)
        {
            maxMinpair.first = a[i];
        }
    }
    for (int i = 0; i < s; i++)
    {
        if (a[i] < maxMinpair.second)
        {
            maxMinpair.second = a[i];
        }
    }
    return maxMinpair;
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    pair<int, int> ans = maxMin(arr, size);

    cout << "Max--> " << ans.first << " Min--> " << ans.second << endl;
    return 0;
}