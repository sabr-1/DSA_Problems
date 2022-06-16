#include <bits/stdc++.h>

using namespace std;

// Time Complexity--> O(n) Space Complexity--> O(1)
// Total number of Comparisions== 3(n-1)/2 (if n is odd ) else 3n/2 - 2 (if n is even).
// Best Solution

pair<long long, long long> maxMin(long long arr[], int s)
{
    pair<long long, long long> maxMinPair;
    int i;

    if (s % 2 == 0)
    {
        if (arr[0] > arr[1])
        {
            maxMinPair.first = arr[0];
            maxMinPair.second = arr[1];
        }
        else
        {
            maxMinPair.first = arr[1];
            maxMinPair.second = arr[0];
        }
        i = 2;
    }
    else
    {
        maxMinPair.first = arr[0];
        maxMinPair.second = arr[0];
        i = 1;
    }
    while (i < s - 1)
    {
        if (arr[i] > arr[i + 1])
        {
            if (arr[i] > maxMinPair.first)
            {
                maxMinPair.first = arr[i];
            }
            if (arr[i + 1] < maxMinPair.second)
            {
                maxMinPair.second = arr[i + 1];
            }
        }
        else
        {
            if (arr[i + 1] > maxMinPair.first)
            {
                maxMinPair.first = arr[i + 1];
            }
            if (arr[i] < maxMinPair.second)
            {
                maxMinPair.second = arr[i];
            }
        }
        i += 2;
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
    pair<long long, long long> maxMinPair = maxMin(arr, size);
    cout << "Max--> " << maxMinPair.first << " Min--> " << maxMinPair.second << endl;
    return 0;
}