#include <bits/stdc++.h>

using namespace std;

// Time Complexity--> O(n) Space Complexity--> O(1)

int main()
{
    string str;
    cin >> str;
    cout << str << endl;
    reverse(&str[0], &str[str.size()]);
    cout << str << endl;
    return 0;
}