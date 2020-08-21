// 186A - Comparing Strings	

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
    string s; cin>>s;
    string t; cin>>t;
    map<char,ll> mp;
    map<char,ll> mp2;
    bool flag=true;
    for(auto i:s)
        mp[i]++;
    for(auto i:t)
        mp2[i]++;
    for(auto i:s)
    {
        if(mp[i]!=mp2[i])
            flag=false;
    }
    for(auto i:t)
    {
        if(mp[i]!=mp2[i])
            flag=false;
    }
    if(flag)
    {
    int c=0;
    ll pos[2]; int k=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=t[i])
        {    c++;
        if(c>2)    break;
        else { pos[k++]=i; }
        }
    }
    
    if(c>2)    flag=false;
    else
    {
       
        char temp=s[pos[0]];
        s[pos[0]]=s[pos[1]];
        s[pos[1]]=temp;
        if(s.compare(t)==0)
            flag=true;
        else
            flag=false;
    }
    }
    if(!flag)
        cout<<"NO";
    else
        cout<<"YES";
    
}