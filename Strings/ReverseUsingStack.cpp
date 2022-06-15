#include <bits/stdc++.h>

using namespace std;

// Time Complexity--> O(n) Space Complexity--> O(n)

void reverseString(string &s)
{
    stack<char> st;

    for (int i = 0; i < s.size(); i++)
    {
        st.push(s[i]);
    }
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = st.top();
        st.pop();
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