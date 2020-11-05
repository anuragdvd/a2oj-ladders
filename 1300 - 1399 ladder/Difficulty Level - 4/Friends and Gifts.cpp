// Friends and Gifts :: https://codeforces.com/problemset/problem/1283/C

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
    si(n);
    ll a[n+1];
    fr(i,1,n+1) cin>>a[i];
    vector<int> graph[n+1];
    ll in[n+1]={0};
    ll out[n+1]={0};
    fr(i,1,n+1)
    {
        if(a[i]!=0)
        {
            graph[i].pb(a[i]);
            in[a[i]]=1;
            out[i]=1;
        }
    }
    
    
    vector<int> in_set;
    vector<int> out_set;
    vector<int> isolated;
    
    fr(i,1,n+1)
    {
        if(in[i]==0&&out[i]==0)
        {
            isolated.pb(i);
        }

        else if(in[i]==0)
        {
            in_set.pb(i);
            
        }
        else if(out[i]==0)
        {
            out_set.pb(i);
        }
    }
    if(isolated.size()==1)
    {
        in_set.pb(isolated[0]);
        for(auto i=in_set.begin();i!=in_set.end();i++)
        {
            if(*i!=isolated[0])
            {
                a[isolated[0]]=*i;
                in_set.erase(i);
                break;
            }
        }
    }
    else if(isolated.size()>1){
      
        fr(i,0,isolated.size()-1)
        {
            a[isolated[i]]=isolated[i+1];
        }
        a[isolated[isolated.size()-1]]=isolated[0];
    }
    
    auto it=out_set.begin();
    //watch(in_set.size()); watch(out_set.size());
    for(auto i=in_set.begin();i!=in_set.end();i++)
    {
        a[*it]=*i; it++;
    }
    
    fr(i,1,n+1)
        cout<<a[i]<<" ";
    
    
    
}