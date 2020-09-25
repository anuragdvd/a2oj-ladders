// 282C - XOR and OR :: https://codeforces.com/problemset/problem/282/C

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
    // three possible cases 
    // 1. 00    0 or 0 = 0     0 xor 0 = 0 (can't create anything)
    // 2. 01    0 or 1 = 1     0 xor 1 = 1 
    // 3. 11    1 or 1 = 1     1 xor 1 = 0  
    string s; cin>>s; string b; cin>>b;
    bool flag=true;
    if(b.length()!=s.length()) cout<<"NO";
    else
    {
        bool flag1=false,flag2=false;
        for(auto i:s)
        {
            if(i=='1')
                flag1=true;
        }
        for(auto i:b)
        {
            if(i=='1')
                flag2=true;
        }

        if((s==b)||flag1&&flag2)    cout<<"YES";
        else    cout<<"NO";

    }
        
}
