#include<bits/stdc++.h>
using namespace std ;
#define lln long long int 
#define pb push_back 
const lln MOD=1000000007; 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        lln n;
        cin>>n;
        lln ar[n],b[n];
        lln mx=0;
        for(lln i=0;i<n;i++){ 
            cin>>ar[i];
            mx=max(mx,ar[i]);
            
        }
         deque<lln>d;
         for(lln i=0;i<n;i++){
             if(ar[i]<mx){
                 d.push_front(ar[i]);
                 mx=ar[i];
             }
             else{
                 d.push_back(ar[i]);
             }
         }
         for(lln i=0;i<n;i++){
             cout<<d[i]<<" ";
         }
         cout<<endl;
        
    }
    return 0;
}