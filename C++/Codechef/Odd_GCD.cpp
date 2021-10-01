#include<bits/stdc++.h>
using namespace std ;
#define lln long long int 
#define pb push_back 
const lln MOD=1000000007; 

void solve(){
    lln n;
    cin>>n;
    lln count=0;
    lln a1,a2;
    cin>>a1>>a2;
    lln gcd=__gcd(a1,a2);
    for(lln i=0;i<n-2;i++){
        lln x;
        cin>>x;
        gcd=__gcd(gcd,x);
    }
    while(gcd%2==0){
        gcd/=2;
        count++;
    }
    cout<<count<<"\n";
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