// 116B - Little Pigs and Wolves ::https://codeforces.com/problemset/problem/116/B

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
#define inf 1000000001

typedef long long int ll;

using namespace std;

int main()
{
    si(n); si(m);
    char ch[n][m];
    fr(i,0,n)
    {
        fr(j,0,m)
        {
            cin>>ch[i][j];
        }
    }
    ll ans=0;
    fr(i,0,n)
    {
        fr(j,0,m)
        {
            if(ch[i][j]=='W')
            {
                if(ch[max(0,i-1)][j]=='P'||ch[min(i+1,n-1)][j]=='P'||ch[i][max(0,j-1)]=='P'||ch[i][min(m-1,j+1)]=='P')
                    ans++;
            }
        }
    }
    cout<<ans;
    
    
}