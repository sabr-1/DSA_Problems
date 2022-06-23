#include <bits/stdc++.h>

using namespace std;

// Time Complexity--> O(n*2) Space Complexity--> O(1).
// By comparing each Character of string with all other Characters.

void printDuplicate(string s)
{
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] != '0')
        {
            int count = 1;
            for (int j = i + 1; j < s.size(); j++)
            {
                if (s[j] == s[i])
                {
                    s[j] = '0';
                    count++;
                }
            }
            if (count > 1)
            {
                cout << s[i] << " " << count << endl;
            }
        }
    }
    return;
}

int main()
{
    string s;
    cin >> s;
    printDuplicate(s);

    return 0;
}