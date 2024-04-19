//Author: Ahkam_Tasin
//Created: 2024-04-19 21:12:54
//<a href= />
#include<bits/stdc++.h>
using namespace std;
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
        ll a[n],b,d;
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        b=*max_element(a, a+n);
	    int q=0, qp=0;
	    while(b>0)
        {
	        b/=2;
	        q++;
	    }
	    d=pow(2, q-1);
	    for(int i=0; i<n; i++)
        {
	        if(a[i]>=d) qp++;
	    }
	    if(qp%2==1) cout<<(qp/2)+1<<endl;
	    else cout<<qp/2<<endl;
    }
    return 0;
}
