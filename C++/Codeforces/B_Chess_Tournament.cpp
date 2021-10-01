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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    for(auto i:s){
        if(i=='2') count++;
    }
    if(count==1 || count==2){
        cout<<"NO \n";
        continue;
    }
    cout<<"YES \n";
    char ar[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                ar[i][j]='X';
            else
                ar[i][j]='=';
        }
    }

    for(int i=0;i<n;i++){
        if(s[i]=='2'){
            for(int j=i+1;j<n+i;j++){
                if(s[j%n]=='2'){
                    ar[i][j%n]='+';
                    ar[j%n][i]='-';
                    break;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ar[i][j];
        }
        cout<<"\n";
    }
    }
    return 0;
}