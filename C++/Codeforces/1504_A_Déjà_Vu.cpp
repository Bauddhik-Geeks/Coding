#include <bits/stdc++.h>

using namespace std;

int isP(string s)
{
    if( equal(s.begin(), s.begin() + s.size()/2, s.rbegin()) )
        return 1;
    else
        return 0;
}
void ml()
{
    string s;
    cin>>s;
    int c=0,n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a')
        {
            c++;
        }
    }
    if(c==n)
    {
        cout<<"NO"<<endl;
        return;
    }
    else
    {
        cout<<"YES"<<endl;
        string as="a";
        string an=s+as;
        if(isP(an))
        {
            an=as+s;
            cout<<an<<"\n";
            return;
        }
        else
        {
            cout<<an<<"\n";
            return;
        }
    }
}


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



int main()
{
  int mc = 1;
    cin >> mc;
    while(mc--)
    {
        ml();
    }
    return 0;
}
