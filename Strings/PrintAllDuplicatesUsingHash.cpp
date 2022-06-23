#include <bits/stdc++.h>

using namespace std;

// Time Complexity--> O(n) Space Complexity--> Consume more space.

const int N = 256;

int hsh[N + 10];

void printDuplicates(string &str)
{
    for (int i = 0; i < str.size(); i++)
    {
        hsh[(int)str[i]]++;
    }
    for (int i = 0; i < N; i++)
    {
        if (hsh[i] > 1)
        {
            cout << (char)(i) << " " << hsh[i] << endl;
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