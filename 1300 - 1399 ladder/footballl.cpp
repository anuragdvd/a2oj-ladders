// Football :: https://codeforces.com/problemset/problem/96/A

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
    string s;    cin>>s;
    
    int c=1;
    bool flag=false;
    fr(i,1,s.length())
    {
        if(s[i]==s[i-1])    c++;
        else    c=1;
        if(c==7)    flag=true;
    }
    if(flag)    cout<<"YES";
    else    cout<<"NO";

}