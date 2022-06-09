#include <bits/stdc++.h>
using namespace std;

// Time Complexity--> O(n)   Space Complexity--> O(1)

void reverseTwoPointer(int a[], int s)
{
    int start = 0, end = s - 1;
    while (start < end)
    {
        // int temp = a[start];
        // a[start] = a[end];
        // a[end] = temp;
        swap(a[start], a[end]);
        start++;
        end--;
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
    reverseTwoPointer(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}