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
    si(t);
    string s; cin>>s;
    fr(i,0,t)
    {
        fr(j,0,n-1)
        {
            if(s[j]=='B'&&s[j+1]=='G')
            {
                swap(s[j],s[j+1]);
                j++;
            }
        }
    }
    cout<<s<<endl;
}