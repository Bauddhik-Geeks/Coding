#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(void)
{
	int t;
	cin>>t;
 
	while(t--){
		int n;
		cin>>n;
		vector<int> arr;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;	
			arr.push_back(x);
		}
 
		vector<vector<int> > v;
		int count=0;
 
		auto tarr = arr;
 
		sort(tarr.begin(), tarr.end());
 
		bool f;
 
		for(int i=0;i<n;i++){
			if(tarr[i]==arr[i])
				continue;
			int j;
			f = false;
			for(j=i+1;j<n;j++){
				if(tarr[i]==arr[j]){
					count++;
					v.push_back({i+1,j+1,j-i});
					f=true;
					break;
				}
			}
			if(f){
 
				int temp = arr[j];
 
				for(int k=j;k>=i;k--){
					arr[k] = arr[k-1];
				}
 
				arr[i] = temp;
			}
		}
 
		cout<<count<<endl;
		for(int i=0;i<v.size();i++){
			cout<<v[i][0]<<" "<<v[i][1]<<" "<<v[i][2]<<endl;
		}
	}
}
