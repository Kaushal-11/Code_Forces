#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[25000];
    int i;
    for (i = 0; i < n; i++)
        cin>>a[i];

    sort(a, a+n);

    for (i = 0; i < n; i++)
        if (a[i] != i + 1)
            break;
    cout<< i + 1;
    return 0;
}
