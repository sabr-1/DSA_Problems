#include <bits/stdc++.h>

using namespace std;

// Time Complexity--> O(n) Space Complexity--> O(1)

void reverseString(string &s)
{

    int start = 0, end = s.size() - 1;
    while (start < end)
    {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
    return;
}
int main()
{
    string str;
    cin >> str;
    cout << str << endl;
    reverseString(str);
    cout << str << endl;
    return 0;
}