// //Author: Ahkam_Tasin
// //Created: 2024-05-21 14:57:59
// //<a href= />
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         vector<int>a(n);
//         for(int i=0;i<n;i++)
//         {
//             cin>>a[i];
//         }
//         map<int,int>mp;
//         set<int>st;
//         for(int x:a)
//         {
//             if(x<=n)
//             {
//                 st.insert(x);
//                 mp[x]++;
//             }
//         } 
//         vector<int>a2;
//         for(auto it=st.begin();it!=st.end();it++)
//             {
//                 a2.push_back(*it);
//             }   
//         int an=0;
//         int ans=0;
//         for(int i=1;i<=n;i++)
//         {
//             for(int c:a2)
//             {
//                 if(i%c==0)
//                 {
//                     an+=mp[c];
//                 }
//             }
//             ans=max(an,ans);
//             an=0;
//         }
//         cout<<ans<<'\n';
        
//     }
//     return 0;
// }



//Author: Ahkam_Tasin
//Created: 2024-05-21 20:28:09
//<a href= />
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        vector<int> count(n + 2, 0);
        
       for(int i=0;i<n;i++)
       {
            if(a[i]>n) continue;
            count[a[i]]++;
       }
       ll ans=0;
       for(int i=1;i<=n;i++)
       {
            ll here=0;
            for(ll j=1;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    here+=count[j];
                    if(j*j!=i)
                    {
                        here+=count[i/j];
                    }
                }
            }
            ans=max(ans,here);
       }
       cout<<ans<<'\n';
    }
    return 0;
}
