#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    double h,l;
    cin>>h>>l;
    double ans=((l*l)-(h*h))/(2*h);
    cout << setprecision(13);
    cout<<ans;
    return 0;
}
