/*
       ／＞  フ
      |  _  _|
     ／`ミ _x 彡      * MEOW *
    /      |
   /   ヽ   ﾉ
／￣|   | | |
| (￣ヽ＿_ヽ_)_)
＼二つ
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
const ll                    mod = 1e9 + 7;

using namespace std;

// ll gcd(ll a,ll b)
// {
//   if (!a)
//     return b;
//   return gcd(b % a, a);
// }



// long long lcm(ll a, ll b)
// {
//     return (a / gcd(a, b)) * b;
// }







// int solve()
// {
//      ll n , x;
//     cin>>n;
//     vi v(n);
//     repi(i,n)
//     {
//         cin>>v[i];
//     }
// }



// void  solve(int n)
// {


// }



int joshi(void)
{

  ios::sync_with_stdio(0);
  cin.tie(0);

// #ifndef ONLINE_JUDGE
//  freopen("input.txt", "r", stdin);//for input from input.txt
//  freopen("output.txt", "w", stdout); //for Output.txt
// #endif

  ll test_case = 1;
  // cin >> test_case;

  while (test_case--)
  {

    //solve();


    ll q, n;
    cin >> n >> q;
    int v[n];
    map<int, int>m;
    repi(i, n)
    {
      cin >> v[i];
      if (m[v[i]] == 0)
      {
        m[v[i]] = i + 1;
      }

    }
    while (q--)
    {
      int yy;
      cin >> yy;

      int ans = 0;

      ans = m[yy];

      cout << ans << " ";
      m.erase(yy);
      for (auto i : m)
      {
        if (i.second < ans)
        {
          m[i.first] = i.second + 1;
        }

      }
      m[yy] = 1;



    }
    cout << endl;




  }





// cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
  return 0;

}
