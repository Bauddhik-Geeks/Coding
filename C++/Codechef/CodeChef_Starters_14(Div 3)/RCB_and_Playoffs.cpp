/* Link to the problem:
https://www.codechef.com/START14C/problems/RCBPLAY/
*/

// Solution:

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if((x+(z*2)) >= y){
	        cout<<"YES\n";
	    }
	    else
	    cout<<"NO\n";
	}
	return 0;
}