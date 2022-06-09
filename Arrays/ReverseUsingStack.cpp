#include <bits/stdc++.h>
using namespace std;

// Time Complexity--> O(n)   Space Complexity--> O(n)

void reverseUsingStack(int a[], int s)
{
    stack<int> st;
    for (int i = 0; i < s; i++)
    {
        st.push(a[i]);
    }
    for (int i = 0; i < s; i++)
    {
        a[i] = st.top();
        st.pop();
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
    reverseUsingStack(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}