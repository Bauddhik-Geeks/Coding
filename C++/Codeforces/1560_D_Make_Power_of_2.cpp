//Author: Divyansh Sahu
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef unordered_set<int> uset;

#define pb push_back
#define trav(e,a) for(auto& e:a)
#define Fr(i,a,b) for(int i=a;i<b;i++)
#define fr(i,a) for(int i=0;i<a;i++)
#define endl '\n'
#define allof(x) x.begin(), x.end()
//Approach: greedy,strings
// precomputing powers of 2:
vl pow2;
void precmp(){
    ll prod=1;
    fr(i,61){
        pow2.pb(prod);
        prod=prod*2;
    }
}
void solve(){
    ll x,sum=0,cnt=0;
    cin>>x;
    vl ans;
    string s1 = to_string(x);
    fr(z,pow2.size()){
        string s2 = to_string(pow2[z]);
        cnt=0;
        ll i=0,j=0;
        while(i<s1.length() && j<s2.length()){
            if(s1[i]==s2[j]){
                i++;j++;
                cnt++;
            }
            else{
                i++;
            }
     }
        cnt = (s1.length()-cnt)+(s2.length()-cnt);
        ans.pb(cnt);
    }
    sort(allof(ans));
    cout<<ans[0];
}
int main(void)
{
ios_base::sync_with_stdio(false);
cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("./input.txt", "r", stdin);
    freopen("./output.txt", "w", stdout);
 #endif
  int t=1;
  cin>>t;
  precmp();
  while(t--){
     solve();
     cout<<endl;
   }
}

