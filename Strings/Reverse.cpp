#include <bits/stdc++.h>

using namespace std;

// Time Complexity--> O(n) Space Complexity--> O(1)

void reverseString(string &s)
{
    for (int i = 0; i < s.size() / 2; i++)
    {
        char temp = s[i];
        s[i] = s[s.size() - 1 - i];
        s[s.size() - 1 - i] = temp;
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