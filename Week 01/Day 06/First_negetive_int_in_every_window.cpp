vector<long long> printFirstNegativeInteger(long long int a[],
                                             long long int n, long long int k) {
        long long int l=0,r=0;
        queue<long long int> q;
        vector<long long >ans;
        while(r<n)
        {
            if(a[r]<0)
            {
                q.push(a[r]);
            }
            if((r-l+1)==k)
            {
                
                if(!q.empty() && q.front()==a[l])
                {
                    ans.push_back(q.front());
                    q.pop();
                }
                else if(!q.empty() && q.front()!=a[l])
                {
                    ans.push_back(q.front());
                }
                else
                {
                    ans.push_back(0);
                }
                l++;
                r++;
            }
            else
            {
                r++;
            }
        }
        return ans; 
 }