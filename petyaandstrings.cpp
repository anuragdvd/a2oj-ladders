// Petya and Strings :: https://codeforces.com/problemset/problem/155/A

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
    string s; string t; cin>>s>>t;
    
    bool flag1=false,flag2=false;
    
    fr(i,0,s.length())
    {
        s[i]=tolower(s[i]);
        t[i]=tolower(t[i]);
    }
   
    fr(i,0,s.length())
    {
        if(s[i]==t[i])  continue;
        if(s[i]<t[i]) { flag1=true; break;  }
        if(s[i]>t[i]) { flag2=true; break;  }
    }
    if(!flag1&&!flag2)  cout<<0;
    if(flag1)   cout<<-1;
    if(flag2)   cout<<1;
}
