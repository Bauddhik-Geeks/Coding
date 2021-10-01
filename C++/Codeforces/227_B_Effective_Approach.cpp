#include <iostream>
#include <unordered_map>
 
using namespace std;
 
int main(void)
{
	int n;
	cin>>n;
 
	unordered_map<int,int> mpp;
	int x;
 
	for(int i=0;i<n;i++){
		cin>>x;
		mpp[x]=i+1;
	}
 
 
	int m;
	cin>>m;
 
	long long unsigned int a=0,b=0;
 
	while(m--){
		cin>>x;
 
		a += mpp[x];
		b += n-mpp[x]+1;
	}
 
	cout<<a<<" "<<b;
}
