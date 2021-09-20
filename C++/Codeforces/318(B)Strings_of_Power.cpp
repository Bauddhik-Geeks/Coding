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





int joshi(void)
{

	ios::sync_with_stdio(0);
	cin.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);//for input from input.txt
	freopen("output.txt", "w", stdout); //for Output.txt
#endif

	int test_case = 1;
// 	cin >> test_case;

	while (test_case--)
	{

		//solve();


		string s;
		cin >> s;
		int n = s.size();
		int heavy = 0 ;
		ll metal = 0;
		for (ll i = 0; i < n; i++)
		{

			if (i < n - 4 && s[i] == 'h')
			{

				if (s[i + 1] == 'e' && s[i + 2] == 'a' && s[i + 3] == 'v' && s[i + 4] == 'y')
				{
					i += 4;
					heavy++;
				}

			}
			if (s[i] == 'm' && i < n - 4)
			{

				if ( s[i + 1] == 'e' && s[i + 2] == 't' && s[i + 3] == 'a' && s[i + 4] == 'l')
				{
					i += 4;
					metal += heavy;
				}


			}
		}
		cout << metal << endl;


	}





// cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
	return 0;

}
 
