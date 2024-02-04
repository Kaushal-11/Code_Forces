#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);

        long long cnt = 0, ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] != arr[i - 1])
                cnt = 0;

            ans += cnt;
            cnt += i;
        }
        cout << ans << endl;
    }
    return 0;
}