#include<bits/stdc++.h>
using namespace std ;
#define lln long long int 

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        int count=1;
        for(int i=1;i<s.length();i++){
            if(s[i]!=s[i-1]) count++;
        }
        if(b>=0){
          cout<<(a+b)*n<<endl;
        }
        else{
            cout<<a*n + b*((count/2)+1)<<endl;

        }
    }
    return 0;
}