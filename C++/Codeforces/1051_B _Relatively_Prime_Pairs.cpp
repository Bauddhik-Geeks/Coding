#include <bits/stdc++.h>
#define ll                  long long
#define llu                 long long unsigned int
#define lld                 long double 
#define ull                 unsigned long long
#define en                  '\n'
#define repi(i,n)           for (int i = 0; i <n; i++)
#define repa(i,a,n)         for(int i=a;i<n;i++)
#define repan(i,a,n)        for(int i=a;i<=n;i++)
#define vi                  vector<int>
#define pi                  pair<int, int>
#define pb                  push_back
#define SUM(a)              accumulate(a.begin(), a.end(), 0)
#define vsort(v)            sort(v.begin(), v.end())
#define rvsort(v)           sort(v.rbegin(), v.rend())
#define vmax(v)             *max_element(v.begin(), v.end())
#define vmin(v)             *min_element(v.begin(), v.end())
#define cnt(v, n)           count(v.begin(), v.end(), (n))
#define mem1(a)             memset(a,-1,sizeof(a))
#define mem0(a)             memset(a,0,sizeof(a))
#define joshi               main



const int                   maxi = 1e5;
const int                   maxn = 3e3 + 10;
const ll                    mod = 1e9 + 7;

using namespace std;





void solve()
{
        ll l,r;
        cin>>l>>r;
        ll i=1;

        

 
        ll n=(r-l+1)/2;


        cout<<"YES\n";
        while(l<r)
        {
          cout<<l<<" "<<l+1<<en;
          l=l+2;
        }


}


int joshi(void)
{

        ios::sync_with_stdio(0);
        cin.tie(0);


      #ifndef ONLINE_JUDGE
            freopen("error.txt" , "w" , stderr);
      #endif

      // #ifndef ONLINE_JUDGE
      //  freopen("input.txt", "r", stdin);//for input from input.txt
      //  freopen("output.txt", "w", stdout); //for Output.txt
      // #endif

      ll test_case=1;
    //   cin>>test_case;
     
      while(test_case--)
      {

        solve();
       
      }
      
    
      
     

// cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
  return 0;

}

