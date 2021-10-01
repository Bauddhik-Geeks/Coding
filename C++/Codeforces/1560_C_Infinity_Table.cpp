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

void solve(){
    ll k,sum=0,count=0;
    cin>>k;
    if(k==1){
        cout<<1<<" "<<1;
        return;
    }
    ll s = sqrt(k);
    ll col;
    if(s*s!=k)
    col =s*s+1;
    else{
         cout<<s<<" "<<1;
         return;
    }
    if(k<=col+s){
        Fr(i,col,col+s+1){
            count++;
            if(k==i){
                cout<<count<<" "<<s+1;
                return;
            }
        }
    }
    else{
        int curr=s+1;
        Fr(i,col+s+1,col+s+s){
            if(k==i){
                cout<<s+1<<" "<<curr-1;
            }
            curr--;
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

