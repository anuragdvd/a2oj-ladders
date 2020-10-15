// learning languages :: https://codeforces.com/problemset/problem/277/A

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

int par[101];
int size[101];

int find(int n)
{
    if(par[n]==n)   return n;
    else return par[n]=find(par[n]);
}

void merge(int a,int b)
{
    int x=find(a);
    int y=find(b);
    if(x==y)    return;
    if(size[x]>=size[y])
    {
        size[x]+=size[y];
        par[y]=x;
    }
    else{
        size[y]+=size[x];
        par[x]=y;
    }
   
}
int main()
{
    si(n);
    si(m);
    
    fr(i,0,101) { par[i]=i; size[i]=1; } 
    int freq[101]={0};
    int val=0;
    fr(i,1,n+1)
    {
       si(x);
       if(x==0) { val++; continue; }
       si(temp);
       freq[temp]++;
       fr(j,1,x)
       {
           
           si(y);
           freq[y]++;
           merge(temp,y);
       }
    }
    
    int ans=0;
    int c=0;
    fr(i,1,m+1)
    {   
       if(freq[i]==0)   c++;
        if(par[i]==i&&freq[i]>0)
        {
           // watch(i);
            ans++;
        }
    }
    ans--;
    if(c==m)    cout<<n;
    else    cout<<ans+val;
    
    
}