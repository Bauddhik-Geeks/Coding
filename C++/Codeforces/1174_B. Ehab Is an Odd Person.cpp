#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long int
#define llu long long unsigned int
#define ld long double
#define ff first
#define ss second
#define mp(x,y) make_pair(x,y)
#define pll pair<ll,ll>
#define pb push_back
#define sz size
#define en '\n'
 
#define repi(i,n) for(ll i=0;i<n;i++)
#define repn(i,a,n) for(ll i=a;i<n;i++)
#define repan(i,a,n) for(ll i=0;i<=n;i++)
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin>>n;
    ll a[n],o=0,e=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]&1)
            o++;
        else
            e++;
    }
    if(o>0&&e>0)
    {
        sort(a,a+n);
        for(ll i=0;i<n;i++)
            cout<<a[i]<<" ";
        return 0;
    }
    for(ll i=0;i<n;i++)
            cout<<a[i]<<" ";
    return 0;
}
