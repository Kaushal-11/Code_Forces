#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << ((s[0] + s[1] + s[2] == s[3] + s[4] + s[5]) ? "YES" : "NO") << endl;
    }
    return 0;
}