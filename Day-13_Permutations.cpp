/*
 * DATE: 14/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/permutations/description/
 * PROBLEM STATEMENT:
 *        Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

Example 1:
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

Example 2:
Input: nums = [0,1]
Output: [[0,1],[1,0]]

Example 3:
Input: nums = [1]
Output: [[1]]
 
Constraints:
1 <= nums.length <= 6
-10 <= nums[i] <= 10
All the integers of nums are unique.

 * __________________________________________________
 * Write statement notes here
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * Write insights here
 * __________________________________________________
 *
 */

class Solution {
public:
vector<vector<int>>ans;
void permutation(vector<int>&arr,int i){
    if(i==arr.size()){
        ans.push_back(arr);
        return ;
    }
    for(int j=i;j<arr.size();j++){
        swap(arr[i],arr[j]);
        permutation(arr,i+1);
        swap(arr[i],arr[j]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        int st=0;
        permutation(nums,st);
        return ans;
    }
};