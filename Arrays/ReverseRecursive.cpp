#include <bits/stdc++.h>
using namespace std;

// Time Complexity--> O(n)   Space Complexity--> O(n)

void reverseRecursive(int a[], int s, int e)
{
    if (s < e)
    {
        int temp = a[s];
        a[s] = a[e];
        a[e] = temp;
        s++;
        e--;
        reverseRecursive(a, s, e);
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
    reverseRecursive(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}