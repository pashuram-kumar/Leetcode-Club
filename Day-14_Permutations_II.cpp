/*
 * DATE: 14/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/permutations-ii/description/
 * PROBLEM STATEMENT:
 *      Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.

Example 1:
Input: nums = [1,1,2]
Output:
[[1,1,2],
 [1,2,1],
 [2,1,1]]

Example 2:
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
 
Constraints:
1 <= nums.length <= 8
-10 <= nums[i] <= 10

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
void issafe(vector<int>&arr,vector<vector<int>>&ans){
    for(int i=0;i<ans.size();i++){
        if(ans[i]==arr){
            return;
        }
    }
    ans.push_back(arr);
}
    vector<vector<int>>ans;
    void permut(vector<int>&arr,int i){
        if(i>=arr.size()){
            issafe(arr,ans);
            return;
        }
        for(int j=i;j<arr.size();j++){
            swap(arr[i],arr[j]);
            permut(arr,i+1);
            swap(arr[i],arr[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int i=0;
        permut(nums,i);
       return ans;
    }
};