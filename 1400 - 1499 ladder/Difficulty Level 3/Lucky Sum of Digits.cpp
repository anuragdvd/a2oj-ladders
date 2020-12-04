// Lucky Sum of Digits :: https://codeforces.com/problemset/problem/109/A

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
    ll min=INT_MAX;
    ll a=0; ll b=0;
    fr(i,0,1000001)
    {
        ll val=(n-i*7)/4;
        if((ceil(n-i*7)/4)==val&&val>=0)
        {
            if(min>(val)+i)
            {
               min=val+i;
                b=i;
                a=((n-7*i)/4);
            }
        }
    }
    //watch(a); watch(b);
    if(a==0&&b==0)  cout<<-1;
    else {
        while(a--)  cout<<"4";
        while(b--)  cout<<"7";
    }
    
}