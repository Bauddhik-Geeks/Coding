#include <iostream>

using namespace std;

class Solution {
public:
    int numTrees(int n) {
        int cat[n+1];
        
        cat[0]=cat[1]=1;
        
        for(int i=2;i<=n;i++){
            cat[i]=0;
            for(int j=0;j<i;j++){
                cat[i]+=cat[i-j-1]*cat[j];
            }
        }
        
        return cat[n];
        
    }
};

int main()
{
    int n;
    cin >> n;
    Solution obj;
    cout << "Number of structurally Unique BST with " << n << " keys are : " << obj.numTrees(n) << "\n";
  
    return 0;
}