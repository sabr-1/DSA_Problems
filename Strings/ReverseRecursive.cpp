#include <bits/stdc++.h>

using namespace std;

// Time Complexity--> O(n) Space Complexity--> O(n)

void reverseRecursive(string &str, int s, int e)
{
    if (s < e)
    {
        char temp = str[s];
        str[s] = str[e];
        str[e] = temp;
        reverseRecursive(str, s + 1, e - 1);
    }
    return;
}

int main()
{
    string str;
    cin >> str;
    cout << str << endl;
    reverseRecursive(str, 0, str.size() - 1);
    cout << str << endl;
    return 0;
}