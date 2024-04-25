// Author: Ahkam_Tasin
// Created: 2024-04-25 11:54:39
//<a href="https://codeforces.com/problemset/problem/1840/C" />
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll l = 0, r = 0, ans = 0;
   

        ll cons = 0;
        while(r<n)
        {
            if (a[r] <= q)
            {
                cons++;
                if (r == n - 1 || a[r + 1] > q)
                {
                    if (cons >= k)
                    {
                        ll x = cons - k + 1LL;
                        ll add = (x * (x + 1LL)) / 2LL;
                        ans += add;
                    }
                    cons = 0;
                }
            }
            r++;
        }

        cout << ans << endl;
    }
    return 0;
}