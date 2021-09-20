#include <bits/stdc++.h>
#define ll                  long long
#define en                  '\n'
#define rep(a,b)            for(ll i=a;i<b;i++)
#define pb                  push_back
#define fr                  first
#define se                  second
#define all(v)              v.begin(),v.end()
const ll                    mod = 1e9 + 7;

using namespace std;




//              ********************** Functions Start **********************          //



ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}


bool isprime(ll n){ 
    if (n <= 1) return true;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
            for (ll i = 5; i * i <= n; i = i + 6)
                    { if (n % i == 0 || n % (i + 2) == 0){ return false;}}
    return true;
}

void swap(int &x, int &y) {int temp = x; x = y; y = temp;}

bool ispalin(string s)
{
    for(ll i=0;i<s.size()/2;i++)
    {
        if(s[i]!=s[s.size()-i-1])
        {
            return false;
        }
    }
    return true;
}


//              ********************** Functions End **********************          //




void solve()
{
        // ll n;
        // cin>>n;
        // ll ele=0,maxi=0;
        // vector<int> v(n);
        
        // map<int,int>mp;

        // rep(0,n)
        // {
        //   cin>>v[i];
        //   mp[v[i]]++;
        //   if(mp[v[i]]>=maxi)
        //   {
        //     maxi=mp[v[i]];
        //     ele=v[i];
        //   }
        // }
        
        // // cout<<ele<<" "<<maxi<<en;

        // if(mp[ele]==n)
        //     {cout<<0<<en;return;}
        // if(mp[ele]==1)
        // {
            
        //     // cout<<"Adsf";

        //     cout<<1<<en;return;
        // }

        // ll cn=0;
        // ll c=0;
        // for(int i=0;i<n;i++)
        // {
        //     if(v[i]!=ele)
        //     {
        //          c++;
        //     }
        //     else if(c>=1)
        //     {
        //         c=0;
        //         cn++;
        //     }
        // }
        // cout<<cn<<en;

    // ll n;
    // cin>>n;
    // vector<int>v(n);
    // rep(0,n){cin>>v[i];}

    // ll m;
    // cin>>m;

    // vector<int>que(m);
    // rep(0,m)
    // {
    //     cin>>que[i];
    // }
    


    // map<int,pair<int,int>>mp;

    // ll prev=v[0];
    
    // // cout<<prev<<en;
    // ll till=v[0];

    // mp[1]={1,v[0]};
    
    // for(int i=1;i<n;i++)
    // {
    //     mp[i+1]={prev+1 , v[i]+till};
        
    //     // cout<<i+1<<" "<<prev+1<<" "<<v[i]+till<<en;

    //     till+=v[i];
    //     prev=till;
    // }

    // // for(auto x:mp)
    // // {
    // //     cout<<x.first<<" "<<x.second.first<<" "<<x.second.second<<en;
    // // }

    // for(int i=0;i<m;i++)
    // {

    // }
    ll n;
    cin>>n;

    ll pos[100010]={0};
    pos[0]=0;
    for(int i=0;i<n;i++)
    {
        ll c;
        cin>>c;
        pos[i+1]=pos[i]+c;
    }
    ll m=0;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        ll c;
        cin>>c;
        auto ans=lower_bound(pos,pos+n , c)-pos;
        cout<<ans<<en;
    }

    
     
}

/*   
     => int overflow
     => array bounds 
     => special cases (n=1?)
     => do smth instead of nothing 
     => stay organized 
     => WRITE STUFF DOWN DON'T GET STUCK ON ONE APPROACH
     =>Read Stuff At Bottom !


     * +-----+-----------------+
     * |  n  | Worst Algorithm |
     * +-----+-----------------+
     * | 11  | O(n!), O(n^6)   |
     * | 18  | O(2^n * n^2)    |
     * | 22  | O(2^n * n)      |
     * | 100 | O(n^4)          |
     * | 400 | O(n^3)          |
     * | 2K  | O(n^2 log n)    |
     * | 10K | O(n^2)          |
     * | 1M  | O(n log n)      |
     * +-----+-----------------+
     
*/

int main(void)
{

        ios::sync_with_stdio(0);
        cin.tie(0);

      // #ifndef ONLINE_JUDGE
      //  freopen("input.txt", "r", stdin);//for input from input.txt
      //  freopen("output.txt", "w", stdout); //for Output.txt
      // #endif
       


      ll test_case=1;
 
     
      while(test_case--)
      {

        solve();
       
      }
      


  cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
  return 0;

}
