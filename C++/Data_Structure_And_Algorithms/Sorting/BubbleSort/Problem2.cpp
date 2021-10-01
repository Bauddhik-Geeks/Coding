//Balanced Partition - HackerEarth
//Solution
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;
        int arr[q][3];
        map<int, int> m;
        for (int i = 0; i < q; i++)
        {
            cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
            m[arr[i][0] - arr[i][1]] += arr[i][2];
        }
        int arr_key[q + 10] = {0};
        int arr_person[q + 10] = {0};
        int arr_fwd[q + 10] = {0};
        int arr_bwd[q + 10] = {0};
        int i = 0;
        for (auto it : m)
        {
            i++;
            arr_key[i] = it.first;
            arr_person[i] = it.second;
        }
        int size = m.size();
        for (int i = 1; i <= size; i++)
        {
            arr_fwd[i] = arr_fwd[i - 1] + arr_person[i];
        }
        for (int i = size; i >= 1; i--)
        {
          arr_bwd[i] = arr_bwd[i + 1] + arr_person[i];
        }
        bool mila = false;
        for (int i = 1; i <= size; i++)
        {
            int sum_left = arr_fwd[i - 1];
            int sum_right = arr_bwd[i + 1];
            if (sum_left == sum_right)
            {
                mila = true;
                break;
            }
        }
        for (int i = 0; i <= size; i++)
        {
           int sum_left = arr_fwd[i];
            int sum_right = arr_bwd[i + 1];
            if (sum_left == sum_right)
          {
                mila = true;
                break;
            }
        }
        if (mila)
            cout << "YES" << endl;
        else
           cout << "NO" << endl;
    }
   return 0;
}
