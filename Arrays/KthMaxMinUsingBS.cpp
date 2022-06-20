#include <bits/stdc++.h>

using namespace std;

// Time Complexity--> O((max elment-min elment)log(max element-min element))  Space Complexity-->O(1).
int countMin(vector<int> v, int n)
{
    int ct = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] <= n)
        {
            ct++;
        }
    }
    return ct;
}

int countMax(vector<int> v, int n)
{
    int ct = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] >= n)
        {
            ct++;
        }
    }
    return ct;
}
int kthSmallest(vector<int> v, int k)
{
    int low = v[0], high = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > high)
        {
            high = v[i];
        }
        else if (v[i] < low)
        {
            low = v[i];
        }
    }
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (countMin(v, mid) < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return low;
}

// int kthLargest(vector<int> v, int k)
// {
//     int low = v[0], high = v[0];
//     for (int i = 1; i < v.size(); i++)
//     {
//         if (v[i] > high)
//         {
//             high = v[i];
//         }
//         else if (v[i] < low)
//         {
//             low = v[i];
//         }
//     }
//     while (high > low)
//     {
//         int mid = low + (high - low) / 2;
//         if (countMin(v, mid) < v.size() - k + 1)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid;
//         }
//     }
//     return low;
// }

int main()
{
    int size;
    cin >> size;

    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int k;
    cin >> k;
    cout << kthSmallest(v, v.size() - k + 1) << " "; // kth Max.
    cout << kthSmallest(v, k) << endl;               // kth Min.
    return 0;
}