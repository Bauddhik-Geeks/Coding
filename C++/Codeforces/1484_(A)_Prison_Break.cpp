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
#define toint(x)            stoi(x)
#define cb                  cout<<"Case "<<"#"<<test_case<<": ";
const int                   maxi = 1e5;
const int                   maxn = 3e3 + 10;
const ll                    mod = 1e9 + 7;

using namespace std;

int main(void)
{

        ios::sync_with_stdio(0);
        cin.tie(0);

        #ifndef ONLINE_JUDGE
          freopen("input.txt", "r", stdin);//for input from input.txt
          freopen("output.txt", "w", stdout); //for Output.txt
        #endif

      ll test_case=1;
      cin>>test_case;
     
      while(test_case--)
      {
        ll a1,b1;
        cin>>a1>>b1;
        cout<<a1*b1<<endl;         
      }
  return 0;

}

