// 276B - Little Girl and Game	 :: http://codeforces.com/problemset/problem/276/B

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
    map<char,int> mp;
    for(auto i:s)
        mp[i]++;
    ll odd=0;
    for(auto i:s)
    {
        if(mp[i]%2!=0)
            odd++;
    }
    if(odd<=1)
        cout<<"First";
    else
    {
        if(odd%2==0)
            cout<<"Second";
        else
            cout<<"First";
    }
}