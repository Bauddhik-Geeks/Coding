#include <bits/stdc++.h>
#define ll                  long long
#define llu                 long long unsigned int
#define lld                 long double 
#define ull                 unsigned long long
#define en                  '\n'
#define repi(i,n)           for (ll i = 0; i <n; i++)
#define repa(i,a,n)         for(ll i=a;i<n;i++)
#define repan(i,a,n)        for(ll i=a;i<=n;i++)
#define pb                  push_back
#define SUM(a)              accumulate(a.begin(), a.end(), 0)
#define joshi               main




const int                   maxi = 1e5;
const int                   maxn = 3e3 + 10;
const ll                    mod = 1e9 + 7;

using namespace std;


bool ispalin(string s)
{
  for(int i=0;i<s.size()/2;i++)
  {
    if(s[i]!=s[s.size()-i-1])
    {
      return false;
    }
  }
  return true;
}


void solve()
{
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll bob=0,alice=0;
        int f=0;
        ll xx=0;

        ll on=0,ze=0;
          for(ll i=0;i<s.size();i++)
          {
            if(s[i]=='1')
            {
              on++;
            }
            else
            {
              ze++;
            }
          }
          
          if(ze==0)
          {
            cout<<"DRAW\n";
            return;
          }
          if(ze%2!=0 && ze!=1)
          {
            cout<<"ALICE\n";
            return;
          }



        cout<<"BOB\n";

     






        







}



int joshi(void)
{

        ios::sync_with_stdio(0);
        cin.tie(0);



      ll test_case=1;
      cin>>test_case;
     
      while(test_case--)
      {

        solve();
       
      }
      
    
      
     

  // cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
  return 0;

}

