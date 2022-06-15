#include <bits/stdc++.h>

using namespace std;

// Iterative Method ------- Time Complexity --> O(n) Space Complexity --> O(1) ----------
// Number of Comparisions ---> Worst Case == 2(n-1) (When Array is sorted in descending order) ---> Best Case == (n-1) (When Array is sorted in Ascending order)

pair<long long, long long> maxMinWithMinComparision(long long arr[], int s)
{

    pair<long long, long long> maxMinPair = {arr[0], arr[0]};
    // if (s == 1)
    // {
    //     return maxMinPair;
    // }
    // if (arr[0] > arr[1])
    // {
    //     maxMinPair.first = arr[0];
    //     maxMinPair.second= arr[1];
    // }
    // else{
    //     maxMinPair.first=arr[1];
    //     maxMinPair.second=arr[0];
    // }
    for (int i = 1; i < s; i++) // int i=2;
    {
        if (arr[i] > maxMinPair.first)
        {
            maxMinPair.first = arr[i];
        }
        else if (arr[i] < maxMinPair.second)
        {
            maxMinPair.second = arr[i];
        }
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

    pair<long long, long long> ans = maxMinWithMinComparision(arr, size);
    cout << "Max--> " << ans.first << " Min--> " << ans.second << endl;
    return 0;
}