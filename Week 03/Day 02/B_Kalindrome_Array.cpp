//Author: Ahkam_Tasin
//Created: 2024-03-30 04:57:53
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int>a;
bool palindrome(int x)
{
    
    vector<int>t;
    for(int w:a)
    {
        if(w!=x)
        {
            t.push_back(w);
        }
    }
    vector<int>t2(t.begin(),t.end());
    reverse(t.begin(),t.end());
    if(t==t2) return true;
    else return false;
}
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
        a.resize(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n==1 || n==0)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            int j=0,k=n-1;
            bool ans=false;
            while(j<k)
            {
                if(a[j]!=a[k])
                {
                    if(palindrome(a[j]))
                    {
                        ans=true;
                    }
                    if(palindrome(a[k]))
                    {
                        ans=true;
                    }
                    break;
                }

                j++;
                k--;
            }
            if(ans==true || j>=k) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
        }
    }
    return 0;
}