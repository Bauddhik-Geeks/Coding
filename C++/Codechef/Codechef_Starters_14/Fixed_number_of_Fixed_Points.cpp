#include<bits/stdc++.h>
using namespace std ;
#define lln long long int 
#define pb push_back 
const lln MOD=1000000007; 

void solve(){
    lln n,k;
    cin>>n>>k;
    if(k==n-1){
        cout<<-1<<"\n";
        return;
    }
    for(lln i=1;i<=k;i++){
        cout<<i<<" ";
    }
    lln x=k+1;
    for(lln i=k+1;i<n;i++){
        cout<<i+1<<" ";
    }
    if(k!=n){
       cout<<x<<" ";
    }
    cout<<"\n";
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lln t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}