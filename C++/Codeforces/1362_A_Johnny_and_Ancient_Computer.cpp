
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

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
void swap(int &x, int &y) {int temp = x; x = y; y = temp;}



template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}





void solve()
{

    // ll n,a,b;
    // cin>>n>>a>>b;

    // // no less than a in front of him
    // // no  more than b behind him

    // // 5 2 3
    // // n a b

  
    ll a,b;
    cin>>a>>b;
    ll di=0,c=0;
    if(a==b)
    {
        cout<<0<<en;
        return;
    }
    if(a>b)
    {

        while(b<a)
        {
            if(a%b==0)
        {
            di=b/a;
        }
        else
        {
            cout<<-1<<en;
            return;
        }

            if(a%8==0 && a/8>=b)
            {
                a=a/8;
                c++; 
           }
            else if(a%4==0 && a/4>=b)
            {
            
                a=a/4;
                 c++;
            }   
            else if(a%2==0 && a/2>=b)
            {
                 c++;
                a=a/2;
            }
            else
            {

                cout<<-1<<en;
                return;
            }

             
        }
        if(a==b)
        {

            cout<<c<<en;
            return;
        }
    }
    else if(a<b)
    {
        if(b%a==0)
        {
            di=b/a;
        }
        else
        {
            cout<<-1<<en;
            return;
        }
        while(a<b)
        { 
            
            if(a*8<=b)
            {   
                a=a*8;
                c++;
            }
            else if(a*4<=b)
            {
                a=a*4;
                c++;

            }
            else if(a*2<=b)
            {
                a=a*2;
                c++;
            } 
            else
            {
              
                cout<<-1<<en;
                return;
            }
        }
        if(a==b)
        {

            cout<<c<<en;
            return;
        }

    }





 if(a==b)
 {
    cout<<c<<en;
    return;
 }
 cout<<"-1"<<en;
 return;

   






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
   cin>>test_case;
     
      while(test_case--)
      {

        solve();
       
      }
      
    
      
     

  cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
  return 0;

}

