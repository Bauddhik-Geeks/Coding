    int maximumDifference(vector<int>& nums) 
    {
        int mini=INT_MAX,maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<mini)
                mini=nums[i];
            else if(nums[i]-mini>maxi)
                maxi=nums[i]-mini;
        }
        if(maxi==0)
            return -1;
        return maxi;
    }