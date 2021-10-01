// Contest Name- Codeforces Round 745 (Div 2)
// Conetst Link- https://codeforces.com/contest/1581
// Problem LInk-  https://codeforces.com/contest/1581/problem/B

/*CQXYM wants to create a connected undirected graph with n nodes and m edges, and the diameter of the graph must be strictly less than k−1. Also, CQXYM doesn't want a graph that contains self-loops or multiple edges (i.e. each edge connects two different vertices and between each pair of vertices there is at most one edge).

The diameter of a graph is the maximum distance between any two nodes.

The distance between two nodes is the minimum number of the edges on the path which endpoints are the two nodes.

CQXYM wonders whether it is possible to create such a graph.

Input
The input consists of multiple test cases.

The first line contains an integer t(1≤t≤105) — the number of test cases. The description of the test cases follows.

Only one line of each test case contains three integers n(1≤n≤109), m, k (0≤m,k≤109).

Output
For each test case, print YES if it is possible to create the graph, or print NO if it is impossible. You can print each letter in any case (upper or lower).

Example
input
5
1 0 3
4 5 3
4 6 3
5 4 1
2 1 1
output
YES
NO
YES
NO
NO */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f1(i,n) for(ll i=1;i<=n;i++)
#define f0(i,n) for(ll i=0;i<n;i++)
#define fr(i,n) for(ll i=n-1;i>=0;i--)
#define fa(i,p,n) for(ll i=p;i<=n;i++)
#define f(i,a) for(auto &i:a)
#define vr vector <ll>
#define pb push_back
#define sn cout<<"\n";
#define sf cout<<endl;
#define mp(x,y) make_pair(x,y)
#define M map<ll,ll>
#define P pair<ll,ll>
#define S second
#define F first
#define PI 3.14159265
#define count1(x) __builtin_popcount(x)
#define G greater<ll>()
#define all(X) X.begin(),X.end()
#define allg(X) X.rbegin(),X.rend()
#define T  int t;cin>>t; while(t--)
#define sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll MX=10000010;
const ll mod=1e9+7;
int main()
{
  sync
  //try:)
  // maximum edges in a graph is n*n-1/2
  // minimun edges in a graph is n-1
  //k>=2 make a star graph
  // for k==1 all node must be connected to eachother
  //for k==0 and n must be == 0 
  T{
    ll n,m,k;cin>>n>>m>>k;
    if(m<n-1)cout<<"NO";
    else if(m>(n*(n-1))/2)cout<<"NO";
    else
    {
      if(k>=4)cout<<"YES";
      else 
      {
        k-=2;
        if(k<0)cout<<"NO";
        else if(k==0&&n==1&&m==0)cout<<"YES";
        else if(k==1&&m==(n*(n-1)/2))
        {
          cout<<"YES";
        }else cout<<"NO";
      }
    }
    sn
  }
  return 0;
}
