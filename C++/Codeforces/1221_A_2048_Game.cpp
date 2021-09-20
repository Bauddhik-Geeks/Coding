#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==2048)
        {
            cout<<"YES"<<"\n";
            return;
        }
        if(a[i]<2048)
        {
            sum+=a[i];
           
        } if(sum>=2048)
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
