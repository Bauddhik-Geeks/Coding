#include <bits/stdc++.h>
#define ll                  long long
#define en                  '\n'
#define rep(a,b)            for(ll i=a;i<b;i++)
#define pb                  push_back

const ll                    mod = 1e9 + 7;
 
using namespace std; 

int main(void)
{

	int n;
	cin>>n;

	int ad[n+1][n+1]={0};	// using adjacency matrix in graph
	

	// initializing them to 0
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			ad[i][j]=0;
			ad[j][i]=0;
		}
	}



	for(int i=0;i<n;i++)
	{
		int u,v;
		cin>>u>>v;
		ad[u][v]=1;
		ad[v][u]=1;
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<ad[i][j]<<' ';
		}
		cout<<en;
	}

  return 0;

}