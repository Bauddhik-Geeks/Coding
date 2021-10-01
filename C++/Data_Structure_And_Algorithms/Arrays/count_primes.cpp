#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        int cnt=0;
        if(n<=1)return 0;
        vector<int>a(n,0);

        a[0]=1;

        for(int i=2;i<=(n/2);i++){
            if(a[i]==0){
                for(int j=i+i;j<n;j+=i){
                    a[j]=1;
                }
            }
        }

        for(int i=2;i<n;i++){
            if(a[i]==0)
                cnt++;
        }

        return cnt;
    }
};

int main()
{
    int n;
    cin >> n;
    Solution obj;
    cout << "Total Prime Nos: " << obj.countPrimes(n);
}
