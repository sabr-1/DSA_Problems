#include <bits/stdc++.h>

using namespace std;

// Time Complexity--> O(n)  Space Complexity--> O(log(n))
// Total number of comparisions== 3n/2 - 2 (if n is power of 2) else more than 3n/2 - 2 .

pair<long long, long long> maxMin(long long arr[], int low, int high)
{
    pair<long long, long long> maxMinPair, maxMinPair1, maxMinPair2;
    if (low == high)
    {
        maxMinPair.first = arr[low];
        maxMinPair.second = arr[low];
        return maxMinPair;
    }
    if (high == low + 1)
    {
        if (arr[low] > arr[high])
        {
            maxMinPair.first = arr[low];
            maxMinPair.second = arr[high];
        }
        else
        {
            maxMinPair.first = arr[high];
            maxMinPair.second = arr[low];
        }
        return maxMinPair;
    }

    int mid = low + (high - low) / 2;
    maxMinPair1 = maxMin(arr, low, mid);
    maxMinPair2 = maxMin(arr, mid + 1, high);
    if (maxMinPair1.first > maxMinPair2.first)
    {
        maxMinPair.first = maxMinPair1.first;
    }
    else
    {
        maxMinPair.first = maxMinPair2.first;
    }

    if (maxMinPair1.second < maxMinPair2.second)
    {
        maxMinPair.second = maxMinPair1.second;
    }
    else
    {
        maxMinPair.second = maxMinPair2.second;
    }
    return maxMinPair;
}

int main()
{
    int size;
    cin >> size;
    long long arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    pair<long long, long long> maxMinPair = maxMin(arr, 0, size - 1);

    cout << "Max--> " << maxMinPair.first << " Min--> " << maxMinPair.second << endl;
    return 0;
}