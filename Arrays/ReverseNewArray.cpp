#include <bits/stdc++.h>
using namespace std;

// Time Complexity--> O(n)   Space Complexity--> O(n)

int *reverseArray(int *a, int s)
{
    int *b = new int[s];
    for (int i = s - 1; i >= 0; i--)
    {
        b[s - 1 - i] = a[i];
    }

    delete[] a;
    return b;
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    arr = reverseArray(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}