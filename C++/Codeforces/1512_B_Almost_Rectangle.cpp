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



int joshi(void)
{

	ios::sync_with_stdio(0);
	cin.tie(0);



	ll test_case = 1;
	cin >> test_case;

	while (test_case--)
	{

		//solve();


		ll n;
		cin >> n;
		char a[n][n];
		int ini = 0, inii = 0, inj = 0, injj = 0, f = 0;
		repi(i, n)
		{
			repi(j, n)
			{
				cin >> a[i][j];

				if (a[i][j] == '*' && f == 0)
				{
					ini = i;
					inj = j;
					f = 1;
				}
				else if (f == 1 && a[i][j] == '*')
				{
					inii = i;
					injj = j;
				}
			}

		}
		// cout << ini << " " << inj << endl;
		// cout << inii << " " << injj << endl;
		// return 0;



		if (inj == injj)
		{
			if (inj + 1 < n && injj + 1 < n )
			{
				a[ini][inj + 1] = '*';
				a[inii][injj + 1] = '*';
			}
			else if (inj - 1 >= 0 && injj - 1 >= 0)
			{
				a[ini][inj - 1] = '*';
				a[inii][injj - 1] = '*';
			}
		}
		else if (ini == inii)
		{
			if (ini + 1 < n  && inii + 1 < n )
			{
				a[ini + 1][inj] = '*';
				a[inii + 1][injj] = '*';
			}
			else if (ini - 1  >= 0 && inii - 1  >= 0)
			{
				a[ini - 1][inj] = '*';
				a[inii - 1][injj] = '*';
			}
		}
		else
		{
			a[ini][injj] = '*';
			a[inii][inj] = '*';

		}




		repi(i, n)
		{
			repi(j, n)
			{
				cout << a[i][j];
			}
			cout << endl;
		}




	}
return 0;

}
 
