class Solution {
    public int maxSubArray(int[] nums) {
        int currentSum = 0;
        int maxSum = Integer.MIN_VALUE;
        for(int num : nums) {
            currentSum += num;
            if(currentSum > maxSum) {
                maxSum = currentSum;
            }
            if(currentSum < 0) {
                currentSum = 0;
            }
        }
        return maxSum;
    }
}

// Video Explaination
// https://www.youtube.com/watch?v=w_KEocd__20&t=305s
