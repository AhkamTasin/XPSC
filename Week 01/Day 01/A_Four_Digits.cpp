 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     
     string a;
     cin>>a;
     int size=0;
     for(char s:a)
     {
        size++;
     }
     if(size<4)
    {
        int z=4-size;
        while(z--)
        {
            cout<<0;
        }
        cout<<a<<'\n';
    }
    else
    {
        cout<<a<<'\n';
    }
     return 0;
 }