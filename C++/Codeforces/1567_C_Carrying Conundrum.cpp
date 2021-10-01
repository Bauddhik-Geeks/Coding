#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <unordered_set>
#include <unordered_map>
#define ll long long int
#define inf 3e18 + 1
#define all(v) (v).begin(), (v).end()
#define N 5005
#define F first
#define S second
using namespace std;
ll fun(ll n) { 
  if(n%4==0) return n;
  if(n%4==1) return 1;
  if(n%4==2) return n+1;
  return 0;
}
ll mod = 1e9 + 7;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
//freopen("error.txt","w",stderr);
#endif
  ll test = 1; 
  cin>>test;
  while (test--){
    string s;
    cin>>s;
    if(s.size()==1) {
      cout<<stoll(s)-1<<endl;
      continue;
    }
    string p="",q="";
    for(int i=0;i<s.size();i++) {
      if(i&1) {
        p+=s[i];
      }
      else q+=s[i];
    }
    // cout<<p<<''
    ll x=stoll(p),y=stoll(q);
    cout<<(x+1)*(y+1)-2<<endl;

  }
  return 0;
}
