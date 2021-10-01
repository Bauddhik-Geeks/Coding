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
// Simple constructive approach
void solve(){
    ll n,m,q,sum=0,count=0;
    cin>>n>>m>>q;
    ll arr[q];
    string str="";
    fr(i,q){
        char ch;
        cin>>arr[i]>>ch;
        str+=ch;
    }
    ll bsize=0;
    ll a[n+1]={0};
    fr(i,q){
        if(str[i]=='+'){
            if(bsize<m){
                if(bsize+1>m){
                    cout<<"Inconsistent";
                    return;
                }
                bsize+=1;
                if(a[arr[i]]==0)
                    a[arr[i]]++;
                else{
                    cout<<"Inconsistent";
                    return;
                }
            }
            else{
                cout<<"Inconsistent";
                   return;
            }
        }
        if(str[i]=='-'){
            if(a[arr[i]]==0){
                cout<<"Inconsistent";
                return;
            }
            bsize--;
            a[arr[i]]=-1;
    }
    }
        cout<<"Consistent";
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

