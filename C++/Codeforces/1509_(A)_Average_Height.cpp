#include <bits/stdc++.h>

using namespace std;

int main(void)
{

  ll t = 1;
  cin >> t;

  while (t--)
  {

    long long n;
    cin >> n;
    vector<int>ev;
    vector<int >od;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
      cin >> v[i];
      if (v[i] % 2 == 0)
      {
        ev.pb(v[i]);
      }
      else
      {
        od.pb(v[i]);
      }
    }
    for(int i=0;od.size();i++)
    {
      cout << od[i] << " ";
    }
    for(int i=0;i<ev.size();i++)
    {
      cout << ev[i] << " ";
    }
    cout << endl;


  }
  return 0;

}

