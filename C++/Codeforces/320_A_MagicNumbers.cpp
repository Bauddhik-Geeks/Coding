#include <iostream>
#include <string>
 
using namespace std;
 
int main(void)
{
	int n;
	cin>>n;
 
	string s = to_string(n);
 
 
	int i=0;
	n = s.size();
 
	while(i<n){
		if(i<n-2 && s[i]=='1' && s[i+1]=='4' && s[i+2]=='4'){
			i+=3;
		}
		else if(i<n-1 && s[i]=='1' && s[i+1]=='4'){
			i+=2;
		}
		else if(s[i]=='1'){
			i++;
		}
		else{
			cout<<"NO";
			return 0;
		}
	}
 
	cout<<"YES";
}
