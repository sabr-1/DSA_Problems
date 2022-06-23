#include <bits/stdc++.h>

using namespace std;

// Time Complexity--> O(n) Space Complexity--> This algorithm also consumes space similar to hash because we are
// creating unordered map to store count of each character but it consumes less space than hash(refer to gfg).

void printDuplicates(string &str)
{
    unordered_map<char, int> m;
    for (int i = 0; i < str.size(); i++)
    {
        m[str[i]]++; // time complexity of insertion --> O(1).
    }
    for (auto pr : m)
    {
        if (pr.second > 1)
        {
            cout << pr.first << " " << pr.second << endl;
        }
    }

    return;
}

int main()
{
    string s;
    cin >> s;

    printDuplicates(s);

    return 0;
}