#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, m, k;
        cin>>n>>m>>k;
        if(k > 3)
            cout<<"0"<<endl;
        else if(k == 3)
            cout<<max(0,m-n-m/n+1)<<endl;
        else if(k == 2)
            cout<<min(m, n+m/n-1)<<endl;
        else
            cout<<"1"<<endl;
    }
return 0;
}   