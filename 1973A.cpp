#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int sum = a+b+c;
        int ans = min(sum/2, a+b);
        if(sum % 2 != 0)
            cout<<"-1"<<endl;
        else
            cout<<ans<<endl;
    }
return 0;
}   