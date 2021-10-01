#include<bits/stdc++.h>
using namespace std ;
#define lln long long int 
#define pb push_back 
const lln MOD=1000000007; 

void solve(){
    int x,y,z;
    cin>>x>>y>>z;
    if(x>=y){
        cout<<"YES"<<endl;
        return;
    }
    if(y-x<=2*z){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}