// Two Substrings :: https://codeforces.com/problemset/problem/550/A

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
#define M 1000000007
#define pb push_back
#define BLK 548 
 
typedef long long int ll;
 
using namespace std;

int main()
{
    bool flag=false;
    bool flag2=false;
    bool flag3=false;
    bool flag4=false;
    string s; cin>>s;
    int n=s.length();
    fr(i,0,n-1)
    {
        if(!flag&&s[i]=='A'&&s[i+1]=='B') { flag=true; i++; }
        else if(!flag2 and s[i]=='B'&&s[i+1]=='A'){ i++; flag2=true; }
    }
    for(int i=n-1;i>0;i--)
    {
        if(!flag3 and s[i]=='A'&&s[i-1]=='B') { flag3=true; i--; }
        else if(!flag4 and s[i]=='B'&&s[i-1]=='A') { flag4=true; i--; } 
    }
    if((flag and flag2 ) or (  flag3 and flag4))  {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    
}