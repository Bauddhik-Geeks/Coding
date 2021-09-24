// /*
//        ／＞  フ
//       |  _  _|
//      ／`ミ _x 彡      * MEOW *
//     /      |
//    /   ヽ   ﾉ
// ／￣|   | | |
// | (￣ヽ＿_ヽ_)_)
// ＼二つ
// */
// #pragma GCC optimize("Ofast")
// #include <bits/stdc++.h>
// #define ll                  long long
// #define llu                 long long unsigned int
// #define endl                '\n'
// #define repi(i,n)           for (int i = 0; i <n; i++)
// #define repia(i,a,n)        for (int i = a; i <=n; i++)
// #define repj(j,n)           for (int j = 0; j < n; j++)
// #define repja(j,a,n)        for (int j = a; j <=n; j++)
// #define vi                  vector<int>
// #define pi                  pair<int, int>
// #define pb(a)               push_back(a)
// #define INT_MAX             2147483647
// #define mem1(a)             memset(a,-1,sizeof(a))
// #define mem0(a)             memset(a,0,sizeof(a))
// #define joshi               main
// #define toint(x)            stoi(x)
// const int                    maxi = 1e5;
// const int                   maxn = 3e3 + 10;
// const ll                    mod = 1e9 + 7;

// using namespace std;



// // bool isPrime(int n)
// // {
// //     if (n <= 1)
// //         return false;
// //     if (n <= 3)
// //         return true;
// //     if (n % 2 == 0 || n % 3 == 0)
// //         return false;
// //     for (int i = 5; i * i <= n; i = i + 6)
// //         if (n % i == 0 || n % (i + 2) == 0)
// //             return false;
// //     return true;
// // }


// // long long lcm(int a, int b)
// // {
// //     return (a / __gcd(a, b)) * b;
// // }







// // int solve()
// // {
// //      ll n , x;
// //     cin>>n;
// //     vi v(n);
// //     repi(i,n)
// //     {
// //         cin>>v[i];
// //     }
// // }



// // void  solve(int n)
// // {


// // }



// int joshi(void)
// {

//   ios::sync_with_stdio(0);
//   cin.tie(0);

// #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);//for input from input.txt
//   freopen("output.txt", "w", stdout); //for Output.txt
// #endif

//   ll test_case = 1;
//   cin >> test_case;

//   while (test_case--)
//   {

//     //solve();


//     ll n;
//     cin >> n;

//     vector<int> b ;
//     vector<int> a ;
//     int c = 0;
//     string s;
//     int si = 0;
//     while (n)
//     {
//       int re = n % 2;
//       if (re == 0)
//       {
//         s += '0';
//       }
//       else
//       {
//         s += '1';
//       }
//       c++;
//       n = n / 10;
//     }
//     si = s.size();
//     int siz = 1;
//     while (si--)
//     {
//       siz *= 2;
//     }
//     for (int i = 1; i <= siz; i++)
//     {
//       for (int j = i; j <= siz; j++)
//       {
//         if ((i ^ j ) == n)
//         {
//           a.pb(i * j);
//           cout << i << " " << j << endl;
//         }
//       }
//     }


//     int nnm = 0;
//     for (int i = 0; i < a.size(); i++)
//     {
//       if (a[i] > nnm)
//       {
//         nnm = a[i];
//       }
//     }
//     cout << nnm << endl;
//   }


// // cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
//   return 0;

// }

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

    llu n;
    cin >> n;
    llu x = 0;
    llu tw = 1;
    llu  l = n;
    while (l)
    {
      tw = tw * 2;
      l = l / 2;
    }
    llu i = (tw / 2) - 1;
    llu j = tw - (n - i);
    llu  maxi = 1;
    maxi = i * j;
    cout<<maxi<<endl;


  }





// cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
  return 0;

}

