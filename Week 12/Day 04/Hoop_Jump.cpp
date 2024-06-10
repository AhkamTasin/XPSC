//Author: Ahkam_Tasin
//Created: 2024-06-10 08:57:51
//<a href="https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/HOOPS" />
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
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    
        cout<<(n+1)/2<<'\n';
    }
    return 0;
}