#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int dif = 0;
        for (int i = 0; i < n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for (int i = 0; i < n-1; i++)
        {
            if(a[i+1] - a[i] > dif){
                dif = a[i+1]-a[i];
            }
        }
        cout<<(dif>1?"NO":"YES")<<endl;
    }
return 0;
}   