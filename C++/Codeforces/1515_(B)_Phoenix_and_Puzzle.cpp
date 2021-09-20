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
const ll                    mod = 1e9 + 7;

using namespace std;
bool square(long long int n)
{
    long long int s=sqrt(n);
    if(s*s==n)
        return true;
    else
        return false;
}
void solve()
{
    long long int n;
    cin>>n;
    long long int a=n/2,b=n/4;
    if(n==6)
    {
        cout<<"NO"<<"\n";
        return;
    }
    if(a*2==n)
    {
        if(square(a))
        {
            cout<<"YES"<<"\n";
            return;
        }
    }
    if(b*4==n)
    {
        if(square(b))
        {
            cout<<"YES"<<"\n";
            return;
        }
    }
    cout<<"NO"<<"\n";
    return;

}
int main()
{
   
    long long int tt;
    cin>>tt;
    while(tt--)
    {
        solve();
    }
    return 0;
}
