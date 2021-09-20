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
void solve()
{
    long long int r,b,d;
    cin>>r>>b>>d;
    //cout<<"YES"<<"\n";
    //cout<<"NO"<<"\n";
    if(d==0)
    {
        if(r==b)
        {
            cout<<"YES"<<"\n";
            return;
        }
        else
        {
            cout<<"NO"<<"\n";
            return;
        }
    }
    if(r==1||b==1)
    {
        if(r>b)
        {
            if(r-b<=d)
            {
                cout<<"YES"<<"\n";
                return;
            }
            else
            {
                cout<<"NO"<<"\n";
                return;
            }
        }
        else
        {
            if(b-r<=d)
            {
                cout<<"YES"<<"\n";
                return;
            }
            else
            {
                cout<<"NO"<<"\n";
                return;
            }
        }
    }
    if(b>r)
    {
        long long int dd=0;
        if(b%r==0)
        {
            dd=b/r;
        }
        else
        {
            dd=b/r+1;
        }
        if(dd-1<=d)
        {
            cout<<"YES"<<"\n";
            return;
        }
        else
        {
            cout<<"NO"<<"\n";
            return;
        }
    }
    else
    {
        long long int dd=0;
        if(r%b==0)
        {
            dd=r/b;
        }
        else
        {
            dd=r/b+1;
        }
        if(dd-1<=d)
        {
            cout<<"YES"<<"\n";
            return;
        }
        else
        {
            cout<<"NO"<<"\n";
            return;
        }
    }
}
int main()
{
      ios::sync_with_stdio(0);
        cin.tie(0);


      ll test_case=1;
      cin>>test_case;
     
      while(test_case--)
      {

        solve();
        }
    return 0;
}
