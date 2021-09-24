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

long long int res(long long int n,long long int e,long long int h,long long int a,long long int b,long long int c)
{
    long long int result=10e15,temp=10e15,one=1;
    if(2*n<=e)
    {
        result=min(result,n*a);
    }
    if(3*n<=h)
    {
        result=min(result,n*b);
    }
    if(n<=e&&n<=h)
    {
        result=min(result,n*c);
    }
    if((h-n)/2>=1&&(h-n)/2>=n-e)
    {
        if(b<c)
        {
            temp=min(n-1,(h-n)/2);
            result=min(result,temp*(b-c)+n*c);
        }
        else
        {
            temp=max(one,n-e);
            result=min(result,temp*(b-c)+n*c);
        }
    }
    if(e/2>=1&&e/2>=(3*n-h+2)/3)
    {
        if(a<b)
        {
            temp=min(n-1,e/2);
            result=min(result,temp*(a-b)+n*b);
        }
        else
        {
            temp=max(one,(3*n-h+2)/3);
            result=min(result,temp*(a-b)+n*b);
        }
    }
    if(e-n>=1&&e+h>=2*n)
    {
        if(a<c)
        {
            temp=min(n-1,e-n);
            result=min(result,temp*(a-c)+n*c);
        }
        else
        {
            temp=max(one,n-h);
            result=min(result,temp*(a-c)+n*c);
        }
    }
    if(n>=3&&e>=3&&h>=4)
    {
        result=min(result,a+b+c+res(n-3,e-3,h-4,a,b,c));
    }
    return result;
}
void solve()
{
    long long int n,e,h,a,b,c;
    cin>>n>>e>>h>>a>>b>>c;
    if(res(n,e,h,a,b,c)==10e15)
    {
        cout<<"-1"<<"\n";
    }
    else
    {
        cout<<res(n,e,h,a,b,c)<<"\n";
    }
    return;
}
int joshi()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll test_case;
    cin>>test_case;
    while(test_case--)
    {
        solve();
    }
    return 0;
    
}
