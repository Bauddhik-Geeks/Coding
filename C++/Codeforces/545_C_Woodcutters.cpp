/*input
9
*/
#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvl vector < vll >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001
#define all(c) c.begin(),c.end()
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define sz(a) int((a).size())
#define pb push_back
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())     
#define rep(i,j,n) for(ll i=j;i<n;i++)
#define mp make_pair
#define N 998244353
#define PI acos(-1.0)
//if (s.find('R') != std::string::npos)
//s.replace(s.find("10"), sizeof("10") - 1, "");
using namespace std;
ll gcd(ll a,ll b){
  if(b==0) return a;
  return gcd(b,a%b);
}
bool compare(const pair<int, int>&i, const pair<int, int>&j)
  {
    return i.second < j.second;
  }
bool isPrime(ll j)
{
  if(j==2)
    return true;
  if(j%2==0)
    return false;
  for(ll i=3;i*i<=j;i=i+2)
    if(j%i==0)
    return false;
  return true;
}
bool isSubSequence(string str1, string str2, int m, int n) 
{ 
  int j = 0; // For index of str1 (or subsequence 

  // Traverse str2 and str1, and compare current character  
  // of str2 with first unmatched char of str1, if matched  
  // then move ahead in str1 
  for (int i=0; i<n&&j<m; i++) 
    if (str1[j] == str2[i]) 
      j++; 

  // If all characters of str1 were found in str2 
  return (j==m); 
} 

long long  int exponentiation(long long  int base, long long  int exp) 
{ 
  if (exp == 0) 
    return 1; 

  if (exp == 1) 
    return base % N; 
  long long int t = exponentiation(base, exp / 2); 
  t = (t * t); 
  if (exp % 2 == 0) 
    return t;
  else  
    return ((base ) * t) ; 
} 
ll digit(ll n){
  ll c=0;
  while(n){
    n=n/10;
    c++;
  }
  return c;

}
ll countDigit(long long n) 
{ 
    return floor(log10(n) + 1); 
} 
int main()
{
  // added the two lines below 
  ios_base::sync_with_stdio (false); 
  cin.tie(NULL);
  cout.tie(0);
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  //freopen("error.txt","w",stderr); 
  #endif
  ll n;
  cin>>n;
  vector<pair<ll,ll>>v;
  ll x,y;
  ll c;
  n>1?c=2:c=1;
  for(int i=0;i<n;i++){
    cin>>x>>y;
    v.pb(mp(x,y));
  }
  for(int i=1;i<n-1;i++){
    if(v[i].first-v[i].second>v[i-1].first) c++;
    else if(v[i].first+v[i].second<v[i+1].first) {
      c++;
      v[i].first=v[i].first+v[i].second;
    }
  }
  cout<<c;
  
  }
