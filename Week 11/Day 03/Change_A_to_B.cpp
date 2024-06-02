//Author: Ahkam_Tasin
//Created: 2024-06-02 19:58:39
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
    while (t--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        int tem = b;
        int c = 0;
        while (tem > a)
        {
            if (tem % k == 0 && tem / k >= a)
                tem /= k, c++;
            else
            {
                if ((tem / k) < a)
                {
                    c += (tem - a);
                    tem -= (tem - a);
                }
                else
                    c += (tem % k), tem -= (tem % k);
                if (tem <= a)
                    break;
            }
        }

        cout << c << "\n";
    }
    return 0;
}