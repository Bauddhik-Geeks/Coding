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


ll rsum(ll n)
{
	ll sum = 0;
	while (n > 0)
	{
		ll rem = n % 10;
		sum += rem;
		n = n / 10;
	}
	return sum;
}


void gcd(ll n)
{
	int f = 0;
	while (f == 0)
	{
		ll sum = rsum(n);

		ll gc;
		gc = gcd(sum, n);

		if (gc > 1)
		{
			cout << n << endl;
			return;
		}
		n++;
	}
}



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


		ll mx;
		cin >> mx;
		gcd(mx);

	}

	return 0;

}
