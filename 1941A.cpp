#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        int cnt = 0;
        cin >> n >> m >> k;
        int arr1[n], arr2[m];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr1[i] + arr2[j] <= k)
                    cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}