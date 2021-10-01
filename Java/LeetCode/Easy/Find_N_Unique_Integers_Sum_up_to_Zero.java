/* https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/

Given an integer n, return any array containing n unique integers such that they add up to 0.
Example 1:

Input: n = 5
Output: [-7,-1,1,3,4]
Explanation: These arrays also are accepted [-5,-1,1,2,3] , [-3,-1,2,-2,4].
Example 2:

Input: n = 3
Output: [-1,0,1]
Example 3:

Input: n = 1
Output: [0] */

class Solution {
    public int[] sumZero(int n) {
        
        int[] ans = new int[n];

        for (int i = 1,j=0; i <= n/2; ++i,j+=2) {
            ans[j] = i;
            ans[j+1] = -i;
        }
        
        return ans;
    }
}