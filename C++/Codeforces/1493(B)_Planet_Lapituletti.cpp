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
#pragma GCC optimize("Ofast")
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



// bool isPrime(int n)
// {
//     if (n <= 1)
//         return false;
//     if (n <= 3)
//         return true;
//     if (n % 2 == 0 || n % 3 == 0)
//         return false;
//     for (int i = 5; i * i <= n; i = i + 6)
//         if (n % i == 0 || n % (i + 2) == 0)
//             return false;
//     return true;
// }


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


// string s1 = to_string(hh);
//   string s2 = to_string(mm);
//   if (s1.size() < 2)
//   {
//     s1 = '0' + s1;
//   }
//   if (s2.size() < 2)
//   {
//     s2 = '0' + s2;
//   }

//   string s3 = "";
//   string s4 = "";
//   for (char c : s1)
//   {
//     if (c == '2')
//     {
//       s1 = '5' + s1;
//     }
//     if (c == '5')
//     {
//       s1 = '2' + s1;
//     }
//     if (c == '0' || c == '1' || c == '8')
//     {
//       s1 = c + s1;
//     }
//     else
//     {
//       return false;
//     }

//   }
//   // cout << s3 << " " << endl;
//   for (char c : s2)
//   {
//     if (c == '2')
//     {
//       s2 = '5' + s2;
//     }
//     if (c == '5')
//     {
//       s2 = '2' + s2;
//     }
//     if (c == '0' || c == '1' || c == '8')
//     {
//       s2 = c + s2;
//     }
//     else
//     {
//       return false;
//     }
//   }
//   // cout << s4 << endl;
//   int x1 = toint(s3);
//   int x2 = toint(s4);
//   if (x1 >= hr)
//   {
//     return false;
//   }
//   if (x2 >= mr)
//   {
//     return false;
//   }
//   return true;





bool check(int hh , int hr, int mm , int mr )
{
  string s1 = to_string(hh);
  string s2 = to_string(mm);
  string s3 = "";
  string s4 = "";

  if (s1.size() < 2)
  {
    s1 = '0' + s1;
  }
  if (s2.size() < 2)
  {
    s2 = '0' + s2;
  }
  for (char c : s1)
  {
    if (c == '2')
    {
      s3 = '5' + s3;
    }
    else if (c == '5')
    {
      s3 = '2' + s3;
    }
    else if (c == '1' || c == '0' || c == '8')
    {
      s3 = c + s3;
    }
    else
    {
      return false;
    }
  }

  for (char c : s2)
  {
    if (c == '2')
    {
      s4 = '5' + s4;
    }
    else if (c == '5')
    {
      s4 = '2' + s4;
    }
    else if (c == '1' || c == '8' || c == '0')
    {
      s4 = c + s4;
    }
    else
    {
      return false;
    }
  }

  int rev1 = toint(s3);
  int rev2 = toint(s4);


  if (rev1 >= mr)
  {
    return false;
  }
  if (rev2 >= hr)
  {
    return false;
  }
  return true;
}



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


    int h , m;
    cin >> h >> m;
    string s;
    cin >> s;
    string s1 = "";
    string s2 = "";
    int f = 0;
    s1.pb(s[0]);
    s1.pb(s[1]);
    s2.pb(s[3]);
    s2.pb(s[4]);

    int hh = toint(s1);
    int mm = toint(s2);
    while (true)
    {
      if (check(hh , h, mm , m))
      {
        break;
      }
      mm++;
      if (mm == m)
      {

        mm = 0;
        hh++;
      }
      if (hh == h)
      {
        hh = 0;
      }
    }
    string ss = to_string(hh);
    string cc = to_string(mm);

    if (ss.size() < 2)
    {
      ss = '0' + ss;
    }
    if (cc.size() < 2)
    {
      cc = '0' + cc;
    }
    cout << ss << ":" << cc << endl;


  }





// cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
  return 0;

}

