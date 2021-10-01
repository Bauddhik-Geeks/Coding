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
        int n,k;
        string s;
        cin>>n>>k;
        cin>>s;
        int prev=-1,friends=1;
/* Iteration over the string to assign friends and prev as final ans and checkmark, respectively.*/
        fr(i,n){
           if(s[i]=='1' && prev==-1){
               prev=i+1;
           }
           else if(s[i]=='1'){
               if(abs(i-prev)<k){
                   prev=i+1;
               }
               else if(abs(i-prev)==k){
                   prev=i;
               }
               else if(i-prev-1==k){
                   prev=i-1;
               }
               else{
                   prev=i+1;
                   friends++;
               }
           }
        }
        if(prev==-1){
            cout<<"0\n";
        }
        else{
            cout<<friends<<"\n";
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

