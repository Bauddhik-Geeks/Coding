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
        
       ll n,m,x;
       cin>>n>>m>>x;

    map<char,bool>till;
    map<char,vector<pair<int,int>>>cord;
    set<char>st;
    vector<pair<int,int>>s;

       rep(0,n)
       {
            for(int j=0;j<m;j++)
            {
                char t;
                cin>>t;
                if(t=='S')
                {
                    s.pb({i,j});
                }
                else
                {
                    cord[t].pb({i,j});
                    st.insert(t);
                }
            }
      } 
      ll size;
      cin>>size;
      string t;
      cin>>t;
      ll cn=0;
      
      int shift=s.size();

      bool f=true;
      for(char k:t)
      {
        char e=tolower(k);
            if(isupper(k) && shift==0)
            {
                f=false;
                break;
            }


                if(till.find(k)==till.end())
                {
                    if(st.find(e)!=st.end())
                    {
                        bool flag=false;
                        bool notreq=false;

                            for(auto xt:cord[e])
                            {
                                    int x1=xt.first;
                                    int y1=xt.second;

                                    if(isupper(k))
                                    {
                                        for(auto it:s)
                                        {
                                            if(notreq)
                                            {
                                                break;
                                            }
                                            int x2 = it.first;  // shift coordinates
                                            int y2 = it.second;
                                            double dist = pow((x1 - x2),2) + pow((y1 - y2),2);
                                            dist = sqrt(dist);
                                            if(dist > x){
                                                flag = true;
                                            }else{
                                                notreq = true;
                                                till[k] = 0;
                                                break;
                                            }
                                        }

                                    }
                                    if(notreq)
                                    {
                                        break;
                                    }                                  
                            }
                            if(flag && !notreq)
                            {
                                till[k]=1;
                                cn++;
                            }
                    }
                    else
                    {
                        f=false;
                        break;
                    }
                }
                else
                {
                    if(till[k]==1)
                    {
                        cn++;
                     
                    }
                }
      }
      if(f)
      {
        cout<<cn<<en;
        return;
      }
      cout<<-1<<en;




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
