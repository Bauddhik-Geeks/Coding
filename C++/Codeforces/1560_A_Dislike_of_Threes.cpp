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
    ll n,sum=0,count=0;
    cin>>n;
    ll arr[10000],s=0;
    for(int i=1;i<10000;i++){
        if(i<3){
            arr[s]=i;
            s++;
        }
        else{
            //checking if i is a multiple of 3 or ends with 3
            if((i%3)!=0 && (i%10)!=3){
                arr[s]=i;
                s++;
            }
            
        }
    }
    cout<<arr[n-1];
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

