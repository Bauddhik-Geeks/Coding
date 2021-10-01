// Link to the problem: 
// https://www.codechef.com/START14C/problems/DIAGMOVE/


// Solution:

#include <bits/stdc++.h>
#define ll long int 
using namespace std;

int main() {
	
	ll t;
    cin>>t;
	while(t--){
	   
        ll x,y;
        cin>>x>>y;
        
        if((abs(x)-abs(y))%2==0){
            cout<<"YES\n";
        }
        else if(abs(x)==abs(y)){
            cout<<"YES\n";
        }
        else
        cout<<"NO\n";
	}
	return 0;
}