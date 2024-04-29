// //Author: Ahkam_Tasin
// //Created: 2024-04-29 17:13:11
// //<a href= />
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll n;
//         cin>>n;
//         vector<ll>a(n);
//         ll sum=0;
//         vector<ll>v(n);
//         for(ll i=0;i<n;i++)
//         {
//             cin>>a[i];
//             v.push_back(abs(a[i]));
//         }
//         sort(v.begin(),v.end());
//         ll neg=0;
 
//         ll ans=0;

//         for(ll i=0;i<n;i++)
//         {
//             if(a[i]>0)
//             {
//                 sum+=a[i];
//             }
//             else
//             {
//                 ll x=a[i]*(-1);
//                 neg++;
//                 sum+=x;
//             }
//         }
               
//         if(neg%2==0)
//         {
//             ans=sum;
//         }
//         else
//         {
//             ans=sum-2*v.front();
//         }
        
        
//         cout<<ans<<'\n';
//     }
//     return 0;
// }


//Author: Ahkam_Tasin
//Created: 2024-04-29 20:45:07
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
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n);
        ll neg=0;
        ll sum=0;
        ll mn=LLONG_MAX;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        
            sum+=abs(a[i]);
            if(a[i]<0)
            {
                neg++;
            }
            mn=min(mn,abs(a[i]));
        }
        
        
      
        if(neg%2==0)
        {
            cout<<sum<<'\n';
        }
        else
        {
            cout<<sum-2*mn<<'\n';
        }
        
    }
    return 0;
}