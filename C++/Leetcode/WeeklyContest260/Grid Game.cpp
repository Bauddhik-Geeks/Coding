
    long long gridGame(vector<vector<int>>& grid) 
    {
        int n=grid[0].size();    
        long long lsum=0, rsum=0,ans= LLONG_MAX;
        // Here we are adding the values from 1st row
        for(int i=0;i<n;i++)
            rsum += grid[0][i];          
        for(int i=0;i<n;++i)
        {
            rsum=rsum-grid[0][i];
            // rsum will contain sum of all elements except for elements starting from 0 to ith column
            ans=min(ans, max(rsum, lsum));
            lsum=lsum+grid[1][i];
            // lsum will contain sum of all elements from 0 to the ith column.      
        }
        return ans;
    }