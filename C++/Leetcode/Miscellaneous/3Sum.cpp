class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       int n=nums.size();
        if(n <3)
            return{};
    
       sort(nums.begin(), nums.end());
        
        vector<vector<int>> vec2;
        set<vector<int>> s;
        int i=0, j=1, k=n-1;
        while(i<n-2)
        {
            if(nums[j]+nums[k]== -nums[i])
            {
                s.insert({nums[i],nums[j],nums[k]});
                k--;
                j++;
            }
            else if(nums[j]+nums[k] > -nums[i])
                 k--;
            else if(nums[j]+nums[k] < -nums[i])
                j++;
            if(j>=k)
            {
                i++;
                j=i+1;
                k=n-1;
            }
        }
        for(auto i:s)
            vec2.push_back(i);
        
        return vec2;
      
    
       
    }
};
