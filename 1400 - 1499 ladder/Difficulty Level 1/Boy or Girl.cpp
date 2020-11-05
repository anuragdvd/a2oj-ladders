// Boy or Girl :: https://codeforces.com/problemset/problem/236/A

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
    {
        if(i-'a'>='a'||i-'a'<='z'||i-'A'>='A'||i-'A'<='Z')
            mp[i]=1;
    }
    if(mp.size()%2==0)  cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
}
        
