#include <bits/stdc++.h>

using namespace std;

// Time Complexity--> O(n)  Space Complexity--> O(1).
// Limitations--> We cannot store the count of duplicates. This method can be used when string consist of alphabet only.
// This method can be used only when string characters are duplicate at most once.
// In our algorithm casing is ignored i.e. 'a' and 'A' are treated as same characters.
// For considering casing we have to declare hsh variable of type long long(64 bit) because int is of 32 bit.
// This method is prefered for string whereas hashing is prefered for numbers.
// Best method is to use unordered maps(both for string as well as for numbers.) but it will consume more space
// however all the above mentioned limitations will be removed.

void printDuplicates(string &str)
{
    int hsh = 0;
    for (int i = 0; i < str.size(); i++)
    {
        int a = 1;
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            a = a << str[i] - 'a';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            a = a << str[i] - 'A';
        }
        if ((hsh & a) != 0)
        {
            cout << str[i] << " is Duplicate.\n";
        }
        else
        {
            hsh = (hsh | a);
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