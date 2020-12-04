// Array :: https://codeforces.com/problemset/problem/224/B

#include<bits/stdc++.h>
#define fr(i,c,b) for(int i=c;i<b;i++)
#define fri(i,c,b,x) for(int i=c;i<b;i+=x)
#define frl(i,c,b) for(ll i=c;i<b;i++)
#define si(x) int x; scanf("%d", &x)
#define sll(x) ll x; scanf("%lld", &x)
#define pi(x) printf("%d", x)
#define pll(x) printf("%lld", x)
#define nl printf("\n")
#define watch(x) cout << (#x) << " is " << (x) << endl
#define MAX 100001
#define M 4294967296
#define pb push_back
#define BLK 548 
 
typedef long long int ll;
 
using namespace std;

int main()
{
    si(n);
    si(k);
    
    ll a[n];
    fr(i,0,n)   cin>>a[i];
    
    pair<int,int> ans={-1,-1};
    
    map<int,int> mp;
    set<int> s;
    
    int start=0; 
    int end=1;
    mp[a[start]]++;
    s.insert(a[start]);
    int mn=INT_MAX;
    while(end<n)
    {
       // watch(start); watch(end);
    
        mp[a[end]]++;
        s.insert(a[end]);
      //  watch(s.size());
        if(s.size()>=k)
        {
            while(s.size()>k&&start<=end)
            {
                mp[a[start]]--;
                if(mp[a[start]]==0)
                {
                    s.erase(a[start]);
                }
                start++;
            }
            
            if(mn>end-start&&s.size()==k)
            {
                mn=end-start;
                
                ans={start+1,end+1};
            }
            
            while(s.size()==k&&start<=end)
            {
                mp[a[start]]--;
               
                if(mp[a[start]]==0)
                {
                    s.erase(a[start]);
                }    
                
                start++;
                if(mn>end-start&&s.size()==k)
                {
                    mn=end-start;
                   // watch(start+1); watch(end+1);
                    ans={start+1,end+1};
                }
                
            }
        }
            end++;
    }
    
    if(mn>end-start&&s.size()==k)
    {
        mn=end-start;
                
        ans={start+1,end};
    }
    
    cout<<ans.first<<" "<<ans.second;
    
    
}