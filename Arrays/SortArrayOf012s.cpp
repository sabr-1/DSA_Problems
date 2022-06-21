#include <bits/stdc++.h>

using namespace std;

// Time Complexity-->O(n) Space Complexity--> O(1).

int main()
{
    int size;
    cin >> size;
    int arr[size];
    int countOf1, countOf2, countOf0;
    countOf0 = countOf1 = countOf2 = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        {
            countOf0++;
        }
        else if (arr[i] == 1)
        {
            countOf1++;
        }
        else
        {
            countOf2++;
        }
    }
    int k = 0;
    while (countOf0--)
    {
        arr[k] = 0;
        k++;
    }
    while (countOf1--)
    {
        arr[k] = 1;
        k++;
    }
    while (countOf2--)
    {
        arr[k] = 2;
        k++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}