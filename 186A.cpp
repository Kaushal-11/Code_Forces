#include<bits/stdc++.h>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    int cnt = 0;
    for (int i = 0; i < a.size() && i < b.size(); i++)
    {
        if(a[i] != b[i])
            cnt++;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if(a == b && cnt == 2)
        cout<<"YES";
    else
        cout<<"NO";
return 0;
}   