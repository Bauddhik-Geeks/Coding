class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int n = m.size();
        vector<vector<int>> v=m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
              m[j][n-1-i]=v[i][j];
          
        }
    }
};
