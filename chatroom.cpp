// Chatroom : http://codeforces.com/problemset/problem/58/A

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
    string s;
    cin>>s;
    string match="hello";
    int i=0;
    int c=0;
    for(auto j:s)
    {
        if(j==match[i])
        {
            i++; c++;
        }
        if(c==5)
            break;
    }
    if(c==5)    cout<<"YES";
    else    cout<<"NO";
}