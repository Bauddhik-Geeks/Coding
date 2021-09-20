#include <bits/stdc++.h>
#define ll                  long long
#define llu                 long long unsigned int
#define lld                 long double 
#define ull                 unsigned long long
#define en                  '\n'
#define repi(i,n)           for (int i = 0; i <n; i++)
#define repa(i,a,n)         for(int i=a;i<n;i++)
#define repan(i,a,n)        for(int i=a;i<=n;i++)
#define pb                  push_back
#define SUM(a)              accumulate(a.begin(), a.end(), 0)
#define joshi               main




const int                   maxi = 1e5;
const int                   maxn = 3e3 + 10;
const ll                    mod = 1e9 + 7;

using namespace std;



void solve()
{
        int n;
    cin>>n;
    int a[n];
    int mini,maxi,min=100,max=0,c=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
        {
            max=a[i];
            maxi=i;
        }
        if(min>a[i])
        {
            min=a[i];
            mini=i;
        }
        if(i>0)
        {
            if(a[i]>a[i-1])
                c++;
        }
    }
    if(c==n-1)
    {
        cout<<0<<"\n";
        return;
    }
    if(mini==0||maxi==n-1)
    {
        cout<<1<<"\n";
        return;
    }
    if(maxi==0&&mini==n-1)
    {
        cout<<3<<"\n";
        return;
    }
    else
    {
        cout<<2<<"\n";
        return;
    }

        
        


}


int joshi(void)
{


      ll t;
  cin>>t;
      while(t--)
      {

        solve();
       
      }
      
    
      
     

  cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
  return 0;

}

