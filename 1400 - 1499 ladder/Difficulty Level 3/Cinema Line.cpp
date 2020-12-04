// Cinema Line ::  https://codeforces.com/problemset/problem/349/A

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
 
typedef long long int ll;
 
using namespace std;

int main()
{
    si(n);
    bool flag=true;
    vector<ll> v(3,0);
    
    fr(i,0,n)
    {
        si(x);
        if(x==25)
        {
            v[0]++;
        }
        if(x==50)
        {
            if(v[0]>0) {
                v[0]--; v[1]++;
            }
            else{
                flag=false; break;
            }
        }
        if(x==100)
        {
            if(v[0]>=1&&v[1]>=1)
            {
                v[0]--; v[1]--; 
            }
            else if(v[0]>=3)
            {
                v[0]-=3;
            }
            else{
                flag=false;
            }
        }
    }
    if(flag)    cout<<"YES";
    else    cout<<"NO";
 
}