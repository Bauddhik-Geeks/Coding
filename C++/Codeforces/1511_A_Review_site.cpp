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

// void  solve(int n)

// {

// }

int joshi(void)

{

        ios::sync_with_stdio(0);

        cin.tie(0);

      ll test_case=1;

      cin>>test_case;

     

      while(test_case--)

      {

        //solve();

        

        ll n;

        cin>>n;

        vector<int> v(n);

        int c1=0,c2=0,c3=0;

        repi(i,n)

        {

          cin>>v[i];

          if(v[i]==1)

    		{    			c1++;

    		}

    		else if(v[i]==2)

    		{

    			c2++;

    		}

    		else 

    		{

    			c3++;

    		}

        }

        cout<<c1+c3<<endl;

        

                

      }

      

  return 0;

}
