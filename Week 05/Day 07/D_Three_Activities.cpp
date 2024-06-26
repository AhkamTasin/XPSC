//Author: Ahkam_Tasin
//Created: 2024-04-25 13:34:32
//<a href= />
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
     ll t;
    cin>>t;
    while(t--){
        ll n,res = 0;
        cin>>n;
        vector < ll > a(n),b(n),c(n);
        vector < pair < ll, ll > > va,vb,vc;
        pair < ll, ll > bkp,bkp2;
        for(ll i = 0 ; i < n ; i++) {
            cin>>a[i];
            va.push_back({a[i],i});
        }
        for(ll i = 0 ; i < n ; i++) {
            cin>>b[i];
            vb.push_back({b[i],i});
        }
        for(ll i = 0 ; i < n ; i++) {
            cin>>c[i];
            vc.push_back({c[i],i});
        }
        sort(va.begin(),va.end(),greater <> ());
        sort(vb.begin(),vb.end(),greater <> ());
        sort(vc.begin(),vc.end(),greater <> ());

        for(ll i = 0 ; i < 3 ; i++) {
            for(ll j = 0 ; j < 3 ; j++) {
                for(ll k = 0 ; k < 3 ; k++) {
                    if(va[i].second!=vb[j].second and va[i].second!=vc[k].second and vb[j].second!=vc[k].second) {
                        res = max(va[i].first+vb[j].first+vc[k].first,res);
                    }
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}