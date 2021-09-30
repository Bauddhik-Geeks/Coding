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
#define take(a) for(int i=0;i<a.size();i++)cin>>a[i]
#define endl '\n'
#define sp " "
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define up upper_bound
#define svz(x) (int)(x).size()
#define all(x) x.begin(), x.end()
#define ins insert
#define f first
#define s second
#define sz(x) sizeof(x)/sizeof(int)
#define MOD 1000000007
#define Sum(a,b) accumulate(all(a),b)

void solve(){
    ll n,sum=0,cnt=0;
    cin>>n;
    vl arr(n);
    fr(i,n){
        cin>>arr[i];
    }
/* Default case */
    if(n>4){
        cout<<"NO";
        return;
    }
    cout<<"YES"<<endl;

/* We iterate i from 0 over n and make conditions for each value%4 */      
    fr(i,n){
        if(i%4==0){
            cout<<arr[i]<<" 0"<<endl;
        }
        else if(i%4==1){
            cout<<"0 "<<arr[i]<<endl;
        }
        else if(i%4==2){
            cout<<(-1)*arr[i]<<" 0"<<endl;
        }
        else{
            cout<<"0"<<sp<<(-1)*arr[i]<<endl;
        }
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

