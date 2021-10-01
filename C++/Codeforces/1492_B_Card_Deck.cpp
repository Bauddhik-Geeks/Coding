#include <iostream>
#include <vector>
#include <map>
using namespace std;
 
void solve()
{
	int n;
	cin>>n;
 
	int arr[n];
 
	for(int i=0;i<n;i++)
		cin>>arr[i];
 
	int max = -1;
 
	map<int, bool> mpp;
	vector< vector<int> > res;
 
	for(int i=0;i<n;i++){
		if(max<arr[i]){
			mpp[arr[i]] = true;
			max = arr[i];
		}
	}
 
	vector<int> temp;
	for(int i=0;i<n;i++){
 
		if(mpp[arr[i]]){
			res.push_back(temp);
			temp.clear();
		}
		temp.push_back(arr[i]);
		if(i==n-1){
			res.push_back(temp);
		}
	}
	
	for(int i = res.size()-1;i>=0;i--){
		for(int j=0 ; j<res[i].size();j++){
			cout<<res[i][j]<<" ";
		}
	}
 
	cout<<endl;
}
 
int main(void)
{
	int t;
	cin>>t;
 
	while(t--){
		solve();
	}
}
