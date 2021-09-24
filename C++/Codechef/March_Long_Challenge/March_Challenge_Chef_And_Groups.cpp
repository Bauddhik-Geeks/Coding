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
const int                    maxi = 1e5;
const int                   maxn = 3e3 + 10;
const ll                    mod = 1e9 + 7;

using namespace std;





// long long lcm(int a, int b)
// {
//     return (a / __gcd(a, b)) * b;
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

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);//for input from input.txt
  freopen("output.txt", "w", stdout); //for Output.txt
#endif

  ll test_case = 1;
  cin >> test_case;

  while (test_case--)
  {

    //solve();

    string s;
    cin >> s;
    string b = "";
    int c = 0;
    repi(i, s.size())
    {
      if (i == 0)
      {
        b += '0';
      }

      b += s[i];

      if (i == s.size() - 1)
      {
        b += '0';
      }

    }
    for (int i = 0; i < s.size() + 2; i++)
    {
      if ((b[i] == '0' && b[i + 1] == '1') || (b[i] == '1' && b[i + 1] == '0'))
      {
        c++;
      }

    }
    cout << c / 2 << endl;


  }





// cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
  return 0;

}

