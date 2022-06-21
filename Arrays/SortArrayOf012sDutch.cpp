#include <bits/stdc++.h>

using namespace std;

// Time Complexity-->O(n) Space Complexity-->O(1).

void sort(int a[], int size)
{
    int low = 0, high = size - 1, mid = 0;
    while (mid <= high)
    {
        switch (a[mid])
        {
        case 0:
            swap(a[mid], a[low]);
            mid++;
            low++;
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(a[mid], a[high]);
            high--;
        }
    }
    return;
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}