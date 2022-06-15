#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s)
{
    // string org = s;
    // reverse(&s[0], &s[s.size()]);
    // if (org == s)                        -------------Time Complexity --> O(n)  Space Complexity --> O(n) -------------------
    // {
    //     return true;
    // }
    // return false;

    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - 1 - i]) // -------------Time Complexity --> O(n)  Space Complexity --> O(1) -------------------
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str;
    cin >> str;
    cout << isPalindrome(str);
    return 0;
}