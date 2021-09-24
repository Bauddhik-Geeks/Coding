/*
  Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

  You must write an algorithm with O(log n) runtime complexity.
 
  Example 1:

  Input: nums = [1,3,5,6], target = 5
  Output: 2

  Example 2:
  
  Input: nums = [1,3,5,6], target = 7
  Output: 4
  
  Youtube solution: https://www.youtube.com/watch?v=0A40XJH_VvE
 */

class search_Insert_Position {
	  public int searchInsert(int[] nums, int target) {
	        int startIndex=0;
	        int endIndex=nums.length-1;
	        int mid = (startIndex+endIndex)/2;
	        while(startIndex<=endIndex){            
	            if(nums[mid] == target)
	                return mid;
	            else if(nums[mid] > target)
	                --endIndex;
	            else
	                ++startIndex;
	            mid = (startIndex+endIndex)/2;    
	        }
	        
	        return startIndex;
	    }
}
