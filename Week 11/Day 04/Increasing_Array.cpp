//Author: Ahkam_Tasin
//Created: 2024-06-03 13:39:14
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
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int steps=0;
    int boro=a[0];
    int chuto=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]<boro)
        {
            boro=a[i-1];

            steps+=a[i-1]-a[i];
        }
        else
        {
            boro=a[i];
        }
    }
    cout<<steps<<'\n';
    return 0;
}