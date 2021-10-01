#include <bits/stdc++.h>
#define ll long long int
#define inf 3e18+1
#define all(v) (v).begin(),(v).end() 
#define N 100005
#define F first
#define S second
#define endl '\n'
using namespace std;
ll mod=1e9+7;
vector<ll>tree;
int f;
ll build(vector<ll>&a,ll v,ll l,ll r){
    if(l==r) {
        tree[v]=a[l];
        return 1;
    }
    else {
        ll m=l+(r-l)/2;
        ll r1=build(a,2*v+1,l,m);
        ll r2=build(a,2*v+2,m+1,r);
        if(r1 || r2) {
            tree[v]=tree[2*v+1] | tree[2*v+2];
            return 0;
        }
        else {
            tree[v]=tree[2*v+1] ^ tree[2*v+2];
            return 1;
        }
    }
}
ll update(ll i,ll val,ll v,ll l,ll r) {
    if(l==r) {
        tree[v]=val;
        return 1;
    }
    else {
        ll m=l+(r-l)/2;
        ll re;
        if(i<=m) {
            re=update(i,val,2*v+1,l,m);
        }
        else {
            re=update(i,val,2*v+2,m+1,r);
        }
        if(re) {
            tree[v]=tree[2*v+1] | tree[2*v+2];
            return 0;
        }
        else  {
            tree[v]=tree[2*v+1] ^ tree[2*v+2];
            return 1;
        }
        
    }
}
// ll minAns(ll v,ll l,ll r,ll x, ll i) {
//     if(r<i) return -1;
//     if(x>tree[v]) return -1;
//     if(l==r) return l;
//     ll m=l+(r-l)/2;
//     ll res= minAns(2*v+1,l,m,x,i);
//     if(res==-1) {
//         res=minAns(2*v+2,m+1,r,x,i);
//     }
//     return res;
     
// }
int main()
{
    // added the two lines below 
    ios_base::sync_with_stdio (false); 
    cin.tie(NULL);
    cout.tie(0);    
    #ifndef ONLINE_JUDGE    
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    //freopen("error.txt","w",stderr); 
    #endif
    ll test=1;//cin>>test;
    while(test--){
        ll n,Q;
        cin>>n>>Q;
        n=pow(2,n); 
        vector<ll>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        tree.resize(4*n);
        build(a,0,0,n-1);
        // cout<<tree[0]<<endl;
        while(Q--){
            ll i,v;
            cin>>i>>v;
            i--;
            update(i,v,0,0,n-1);
            cout<<tree[0]<<endl;

        }

    }
   
    return 0;
}
 
