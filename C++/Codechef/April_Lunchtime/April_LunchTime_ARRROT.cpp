/*   => int overflow
     => array bounds 
     => special cases (n=1?)
     => do smth instead of nothing 
     => stay organized 
     => WRITE STUFF DOWN DON'T GET STUCK ON ONE APPROACH
     =>Read Stuff At Bottom !
*/


#include <bits/stdc++.h>
#define ll                  long long
#define llu                 long long unsigned int
#define endl                '\n'
#define repi(i,n)           for (int i = 0; i <n; i++)
#define repia(i,a,n)        for (int i = a; i <=n; i++)
#define repj(j,n)           for (int j = 0; j < n; j++)
#define repja(j,a,n)        for (int j = a; j <=n; j++)
#define vi                  vector<int>
#define pi                  pair<int, int>
#define pb(a)               push_back(a)
#define INT_MAX             2147483647
#define mem1(a)             memset(a,-1,sizeof(a))
#define mem0(a)             memset(a,0,sizeof(a))
#define joshi               main
#define toint(x)            stoi(x)
#define cb                  cout<<"Case "<<"#"<<test_case<<": ";
const int                   maxi = 1e5;
const int                   maxn = 3e3 + 10;


using namespace std;


ll m=1e9+7;

ll mod(ll x)
{
    return(x%m+m)%m; 
}

ll add(ll a , ll b){
    return mod(mod(a)+mod(b));
}

int joshi(void)
{

        ios::sync_with_stdio(0);
        cin.tie(0);



   

        //solve();

        
       ll sum=0;
       ll n,q;
       cin>>n;
       std::vector<ll> v(n);
       repi(i,n)
       {
        cin>>v[i];
        sum+=v[i];
       }
       cin>>q;
       while(q--)
       {
        ll x;
        cin>>x;
  
    sum=add(sum,sum);
              cout<<sum<<endl;

       }
       
        
                
      
      
    
      
     

// cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
  return 0;

}

