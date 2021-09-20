#include <bits/stdc++.h>
#define ll                  long long
#define llu                 long long unsigned int
#define lld                 long double 
#define ull                 unsigned long long
#define en                  '\n'
#define repi(i,n)           for (int i = 0; i <n; i++)
#define pb                  push_back
using namespace std;




void solve()
{
        ll n;
        cin>>n;
        ll sum=0;
        vector<int> v(n);
        set<int> se;
        repi(i,n)
        {
          cin>>v[i];
          sum+=v[i];
          se.insert(v[i]);
        }
        sort(v.begin(),v.end());
        ll c=0;
        int le=v[0];

        repi(i,n)
        {
          if(v[i]==le)
          {
            c++;
          }
        }

        cout<<n-c<<en;


}


int main(void)
{

        

      ll test_case=1;
      cin>>test_case;
     
      while(test_case--)
      {

        solve();
       
      }
      
    
      
     

  cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
  return 0;

}
 
