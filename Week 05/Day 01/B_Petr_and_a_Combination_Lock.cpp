//Author: Ahkam_Tasin
//Created: 2024-04-19 16:42:37
//<a href= />
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    
    bool flag = false;
    int m = (1<<n);
    for(int i=0;i<m;i++)
    {
        int sum = 0;
        for(int bits = 0;bits<n;bits++)
        {
            if(i &(1<<bits))
            {
                sum+=arr[bits];
            }
            else 
            {
                sum-=arr[bits];
            }
        }
        
        if(sum%360==0)
        {
            flag=true;
            break;
        }
    }
    
    if(flag==true)
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        cout<<"NO"<<'\n';
    } 
    return 0;
}