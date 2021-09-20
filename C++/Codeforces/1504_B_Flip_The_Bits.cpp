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
#define cb                  cout<<"Case "<<"#"<<test_case<<": ";
const int                   maxi = 1e5;
const int                   maxn = 3e3 + 10;
const ll                    mod = 1e9 + 7;

using namespace std;

ll gcd(ll a, ll b)
{
	if (!a)
		return b;
	return gcd(b % a, a);
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



// void  solve(int n)
// {


// }





int joshi(void)
{

	ios::sync_with_stdio(0);
	cin.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);//for input from input.txt
	freopen("output.txt", "w", stdout); //for Output.txt
#endif

	ll test_case = 1;
	cin >> test_case;

	while (test_case--)
	{

		//solve();


		// ll n;
		// cin >> n;
		// string s;
		// cin >> s;
		// string s1 = "";
		// string s2 = "";

		// for (int i = 0; i < n; i++)
		// {
		// 	if (s[i] == '1')
		// 	{
		// 		s1 += '(';
		// 		s2 += ')';

		// 	}
		// 	else
		// 	{
		// 		s1 += ')';
		// 		s2 += '(';
		// 	}
		// }
		// bool x = next_balanced_sequence(s1);
		// bool y = next_balanced_sequence(s2);


		// if(x==1)
		// {

		// }
		string s1, s2;
		ll n;
		cin >> n;
		cin >> s1 >> s2;
		bool  f = false;
		int o = 0 , z = 0;
		repi(i, n)
		{
			if (s1[i] == '1')
			{
				o++;
			}
			else
			{
				z++;
			}
		}
		int g = 0;
		for (int i = n - 1; i >= 0 and g == 0; i--)
		{
			if ((s1[i] == s2[i] && f == true) || (s1[i] != s2[i] && f == false))
			{
				if (z == o)
				{
					f = !f;
				}
				else
				{
					g = 1;
					break;
				}
			}
			if (s1[i] == '1')
			{
				o--;
			}
			else
			{
				z--;
			}
		}
		if (g == 1)
		{
			cout << "NO\n";
		}
		else
		{
			cout << "YES\n";
		}







	}





// cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
	return 0;

}

