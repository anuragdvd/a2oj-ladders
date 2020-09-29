// 459A - Pashmak and Garden :: https://codeforces.com/contest/459/problem/A

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
    si(a); si(b);
    si(c); si(d);
    int x1,x2,y1,y2;
    if(a != c && b != d && abs(a - c) != abs(b - d))
    {
        cout<<-1;
    }
    else if(a==c)
    {
        y1=b, y2=d;
        x1=a+max(b,d)-min(b,d); x2=x1;
        cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
    }
    else if(b==d)   // y coordinate are smae
    {
        x1=a; x2=c;
        y1=b+max(a,c)-min(a,c); y2=y1;
        cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;

    }
    else
    {
        x1=a, y1=d; 
        x2=c, y2=b;
        
            cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;

    }
    
    
}