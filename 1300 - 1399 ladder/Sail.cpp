// 298B - Sail	:: http://codeforces.com/problemset/problem/298/B

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

float dist(int a,int b,int c,int d)
{
    float x=(a-c); x*=x;
    float y=(b-d); y*=y;
    return (sqrt(x+y));
}


int main()
{
    si(t);
    si(sx); si(sy);
    si(ex); si(ey);
    string s; cin>>s;
    int c=0;
    for(auto i:s)
    {
        if(i=='S')
        {
            ll tempx=sx; ll tempy=sy-1;
            if(dist(tempx,tempy,ex,ey)<dist(sx,sy,ex,ey))
            {
               
                sx=tempx;
                sy=tempy;
            }
        }
        if(i=='N')
        {
            ll tempx=sx; ll tempy=sy+1;
            if(dist(tempx,tempy,ex,ey)<dist(sx,sy,ex,ey))
            {
               
                sx=tempx;
                sy=tempy;
            }
        }
        if(i=='E')
        {
            ll tempx=sx+1; ll tempy=sy;
            if(dist(tempx,tempy,ex,ey)<dist(sx,sy,ex,ey))
            {
              sx=tempx;
                sy=tempy;
            }
        }
        if(i=='W')
        {
            ll tempx=sx-1; ll tempy=sy;
            if(dist(tempx,tempy,ex,ey)<dist(sx,sy,ex,ey))
            {
                
                sx=tempx;
                sy=tempy;
            }
        }
        c++;
        if(sx==ex&&sy==ey) { break;  }
    }
    if(sx==ex&&sy==ey) { cout<<c;  }
    else    cout<<-1;
}