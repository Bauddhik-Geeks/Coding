/*
  Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

  You may assume that each input would have exactly one solution, and you may not use the same element twice.

  You can return the answer in any order.

  Example:
  Input: nums = [2,7,11,15], target = 9
  Output: [0,1]
  Output: Because nums[0] + nums[1] == 9, we return [0, 1].
  
  
  Youtube Solution: https://www.youtube.com/watch?v=BoHO04xVeU0
*/



import java.util.HashMap;
import java.util.Map;

class two_Sum {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer,Integer> indexMap = new HashMap<Integer,Integer>();
        
        for(int i=0; i<nums.length;++i){
            if(indexMap.containsKey((target-nums[i])))
                return new int[]{i,indexMap.get((target-nums[i]))};
            else    
                indexMap.put(nums[i],i);
            
        }
        return new int[]{-1,-1};
    
    }
}