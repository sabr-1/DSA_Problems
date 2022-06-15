#include <bits/stdc++.h>

using namespace std;

// Time Complexity--> O(n) Space Complexity--> O(n)

void reverseString(string &s)
{

    string newstr = s;
    for (int i = 0; i < s.size(); i++)
    {
        newstr[i] = s[s.size() - 1 - i];
    }
    s = newstr;
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