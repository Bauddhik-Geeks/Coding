/* Link to the problem:
https://www.codechef.com/START14C/problems/BININVER/
*/

// Solution:

#include <bits/stdc++.h>
using namespace std;

int result(int a, int count)
{
    if (a % 2 != 0)
    {
        return count;
    }
    count++;
    return result(a / 2, count);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag == false)
        {
            cout << 0 << endl;
        }
        else
        {
            vector<int> a;
            for (int i = 0; i < n; i++)
            {
                a.push_back(result(v[i], 0));
            }
            sort(a.begin(), a.end());
            cout << a[0] << endl;
        }
    }
    return 0;
}
