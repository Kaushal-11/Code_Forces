#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        for (int i = k; i >= 0; i--)
                cout<<n-i<<" ";
        for (int i = n-k-1; i > 0; i--)
                cout<<i<<" ";
        cout<<endl;
    }  
return 0;
}   