// Little Elephant and Chess :: https://codeforces.com/problemset/problem/259/A

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
    char ch[8][8];
    fr(i,0,8)
    {
        fr(j,0,8)   cin>>ch[i][j];
    }
    bool flag=true;
    
    fr(i,0,8)
    {
        fr(j,1,8)
        {
            if(ch[i][j]==ch[i][j-1])
            {
                flag=false; break;
            }
        }
    }
    
    if(flag)    cout<<"YES";
    else    cout<<"NO";
    
}