#include <bits/stdc++.h>

using namespace std;

// Time Complexity--> O(n) Space Complexity--> O(n).

const int N = 1e5 + 10;
int hsh[N];

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        hsh[arr[i]]++;
    }
    int k;
    cin >> k;
    int j = 0, kth = 0, l = N - 1;
    while (l >= 0)
    {
        if (hsh[l] >= 1)
        {
            kth++;
        }
        if (kth == k)
        {
            cout << l << " "; // Kth Max
            break;
        }
        l--;
    }
    kth = 0;
    while (j < N)
    {
        if (hsh[j] >= 1)
        {
            kth++;
        }
        if (kth == k)
        {
            cout << j << endl; // Kth Min.
            break;
        }
        j++;
    }

    return 0;
}