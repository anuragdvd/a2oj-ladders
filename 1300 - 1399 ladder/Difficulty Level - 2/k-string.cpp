// Dubstep::https://codeforces.com/problemset/problem/208/A

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
    si(k);
    string s; cin>>s;
    map<char,int> mp;
    for(auto i:s)   mp[i]++;
    bool flag=true;
    for(auto i:s) if(mp[i]%k!=0) flag=false;
    if(!flag)
        cout<<"-1"<<endl;
    else
    {
        string ans; 
        for(auto i:mp)
        {
            ll tm=i.second/k;
            while(tm--) { ans+=i.first; }
        }
        string temp=ans;
        while(ans.length()!=s.length())  ans+=temp;
        cout<<ans;
    }
}