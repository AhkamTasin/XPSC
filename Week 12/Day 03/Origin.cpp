//Author: Ahkam_Tasin
//Created: 2024-06-09 18:17:44
//<a href= />
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long n, ans;
        cin >> n;
        long long x, y;
        x = (n / 9) * 45;
        y = (n % 9);
        ans = x + ((y * (y + 1)) / 2);
        cout << ans << '\n';
    }

    return 0;
}