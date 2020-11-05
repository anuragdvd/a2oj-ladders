// Product of Three Numbers :: https://codeforces.com/problemset/problem/1294/C

#include<bits/stdc++.h>
#define fr(i,c,b) for(int i=c;i<b;i++)
#define frl(i,c,b) for(ll i=c;i<b;i++)
#define si(x) int x; scanf("%d", &x)
#define sll(x) ll x; scanf("%lld", &x)
#define pi(x) printf("%d", x)
#define pll(x) printf("%lld", x)
#define nl printf("\n")
#define watch(x) cout << (#x) << " is " << (x) << endl
#define MAX 100001
#define M 1000000007
#define pb push_back

typedef long long int ll;

using namespace std;

int main()
{
    si(t);
    while(t--)
    {
        sll(n);
        set<ll> s;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0){
                if(n/i==i)
                    s.insert(i);
                else{
                    s.insert(i); s.insert(n/i);
                }
            }
        }
        
        bool flag=false; 
        vector<int> ans;
        
        auto it=s.begin();
        
        for(it;it!=s.end();it++)
        {
            auto it2=it; it2++;
            for(it2;it2!=s.end();it2++)
            {
                ll val=(*it)*(*it2);
                if(ceil(n/val)==n/val)
                {
                    if(s.find(n/val)!=s.end()&&(n/val)!=*it&&(n/val)!=*it2)
                    {
                        flag=true;
                        ans.pb(*it); ans.pb(*it2); ans.pb(n/val);
                        break;
                    }
                }
                if(flag)    break;
            }
             if(flag)    break;
        }
        if(flag){
            cout<<"YES"; nl; for(auto i:ans)    cout<<i<<" "; nl;
        }
        else{
            cout<<"NO"; nl;
        }
    }
}