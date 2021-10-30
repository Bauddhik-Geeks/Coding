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

#define trav(e,a) for(auto& e:a)
#define Fr(i,a,b) for(int i=a;i<b;i++)
#define fr(i,a) for(int i=0;i<a;i++)
#define endl '\n'
//Basic Observation
void solve(){
    ll n,sum=0,count=0;
    ll a,b,c;
    cin>>a>>b>>c;
        n = abs(a-b)*2;
        if(c>n){
            cout<<-1;
            return;
        }
        if(n<max(a,b)){
            cout<<-1;
            return;
        }
        if(c>n/2){
            cout<<c-n/2;
        }
        else{
            cout<<c+n/2;
        }
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
  while(t--){
     solve();
     cout<<endl;
   }
}

