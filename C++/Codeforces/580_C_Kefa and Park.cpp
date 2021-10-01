#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define inf 1000000000000000001
#define mp make_pair
#define N 100005
#define PI acos(-1.0)
using namespace std;
ll ans=0,m;
vector<ll>adj[N];
ll vis[N];
ll cat[N];
void dfs(ll s,ll cnt,ll mx){
  vis[s]=1;
  if(cat[s]==0) cnt=0;
  else cnt++;
  mx=max(mx,cnt);
  if(adj[s].size()==1&&s!=1){
    if(mx<=m) ans++;
    return;
  }
    for(auto i:adj[s]){
      if(!vis[i])
      dfs(i,cnt,mx);
    
  }
}
int main()
{
  // added the two lines below 
  ios_base::sync_with_stdio (false); 
  cin.tie(NULL);
  cout.tie(0);
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  //freopen("error.tx t","w",stderr); 
  #endif
  // ll t;
  ll t=1;
  // cin>>t;
  
  while(t--){
    ll n;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
      cin>>cat[i];
      vis[i]=0;
    }
    ll x,y;
    for(int i=0;i<n-1;i++){
      cin>>x>>y;
      adj[x].push_back(y);
      adj[y].push_back(x);
    }
    dfs(1,0,0);
    cout<<ans<<endl;

  }

}
