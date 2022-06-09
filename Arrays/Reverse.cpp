#include <bits/stdc++.h>
using namespace std;

// Time Complexity--> O(n)   Space Complexity--> O(1)

void reverseArray(int a[], int s)
{
    for (int i = 0; i < s / 2; i++)
    {
        int temp = a[i];
        a[i] = a[s - 1 - i];
        a[s - 1 - i] = temp;
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverseArray(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}