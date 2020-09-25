// String Task :: https://codeforces.com/problemset/problem/118/A

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
    string ans;
    for(auto i:s)
    {
        if(i=='a'||i=='e'||i=='o'||i=='u'||i=='i'||i=='y'||i=='Y'||i=='A'||i=='E'||i=='O'||i=='U'||i=='I')  continue;
        else {  ans+='.';  ans+=i; } 
    }
    transform(ans.begin(),ans.end(),ans.begin(),::tolower);
    cout<<ans;
}