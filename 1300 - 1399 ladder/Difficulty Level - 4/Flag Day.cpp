// Flag Day ::  https://codeforces.com/problemset/problem/357/B

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
    si(m);
    int color[n+1]={0};
    
    fr(i,0,m)
    {
        si(x); si(y); si(z);
        if(color[x]==0) color[x]=1;
        else{
            if(color[x]==1) color[y]=2, color[z]=3;
            if(color[x]==2) color[y]=1, color[z]=3;
            if(color[x]==3) color[y]=2, color[z]=1;   
            continue;
        }
        if(color[y]==0) color[y]=2;
        else{
            if(color[y]==1) color[x]=2, color[z]=3;
            if(color[y]==2) color[x]=1, color[z]=3;
            if(color[y]==3) color[x]=2, color[z]=1;  
            continue;
        }
        if(color[z]==0) color[z]=3;
        else{
            if(color[z]==1) color[y]=2, color[x]=3;
            if(color[z]==2) color[y]=1, color[x]=3;
            if(color[z]==3) color[y]=2, color[x]=1;  
            continue;
        }
    }
    
    fr(i,1,n+1) cout<<color[i]<<" ";
    
    
}