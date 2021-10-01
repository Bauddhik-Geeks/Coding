/* Link to the problem:
https://www.codechef.com/START14C/problems/FIXFIX/
*/

// Solution:

#include "bits/stdc++.h"
using namespace std;

#define RAFTAR ios::sync_with_stdio(NULL);
#define INPUT cin.tie(NULL);
#define OUTOUT cout.tie(0);
#define prn(n) cout << n << "\n"
#define prs(n) cout << n << " "
#define pr(n) cout << n
#define foi(n) for (int i = 0; i < n; i++)
#define foj(a, n) for (int j = a; j < n; j++)
#define ll long long
#define nl cout << "\n"
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define din int n; cin >> n;
#define dix int x; cin >> x;
#define all(v) v.begin(), v.end()
#define ull unsigned ll

typedef map<int, int> mpi;
typedef multimap<int, int> mmpi;
typedef vector<int> veci;
typedef vector<ll> vecl;
typedef vector<string> vecs;
typedef vector<float> vecf;
typedef vector<pair<int, int>> vecp;

const int32_t mod = 1000000007;
const int32_t MAXN = 1000005;

void solve();

int main()
{
    RAFTAR INPUT OUTOUT int TEST = 1;
    cin >> TEST;
    while (TEST--)
        solve();
    return 0;
}

void solve()
{
    int x, y;
    cin >> x >> y;
    if (x - 1 != y)
    {
        int i = 0;
        for (; i < y; i++)
            prs(i + 1);
        if (x != y)
        {
            prs(x);
            //i++;
            for (; i < x - 1; i++)
                prs(i + 1);
        }
        nl;
    }
    else
        prn(-1);
}