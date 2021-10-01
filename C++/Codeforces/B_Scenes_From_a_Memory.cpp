#include<bits/stdc++.h>
using namespace std ;
#define lln long long int 

bool prime[10000];

void prime_arr(){
    memset(prime,true,sizeof(prime));
    prime[1]=true;
    for(int i=2;i*i<=10000;i++){
        if(prime[i]==true){
            for(int j=i*i;j<=10000;j+=i)
                prime[j]=false;
        }
    }
}

void solve(){
     int k;
     cin>>k;
     string n;
     cin>>n;
     for(int i=0;i<k;i++){
         if(n[i]=='1'){
             cout<<1<<endl;
             cout<<1<<endl;
             return;
         }
     }
     for(int i=0;i<k;i++){
         string s="";
         s=n[i];
         int m=stoi(s);
         if(!prime[m]){
             cout<<1<<endl;
             cout<<m<<endl;
             return;
         }
     }
     for(int i=0;i<k;i++){
         for(int j=i+1;j<k;j++){
             string s="";
             s=n[i];
             s+=n[j];
             int m=stoi(s);
             if(!prime[m]){
                 cout<<2<<endl;
                 cout<<s<<endl;
                 return;
             }
         }
     }
}
int main(void){
    prime_arr();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}