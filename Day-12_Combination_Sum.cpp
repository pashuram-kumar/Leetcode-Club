/*
 * DATE: 14/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/combination-sum/description/
 * PROBLEM STATEMENT:
 *        Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.

Example 1:
Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
Explanation:
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.

Example 2:
Input: candidates = [2,3,5], target = 8
Output: [[2,2,2,2],[2,3,3],[3,5]]

Example 3:
Input: candidates = [2], target = 1
Output: []
 
Constraints:
1 <= candidates.length <= 30
2 <= candidates[i] <= 40
All elements of candidates are distinct.
1 <= target <= 40

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
    int sum(vector<int>&output){
        int ans=0;
        for(int i=0;i<output.size();i++){
            ans=ans+output[i];
        }
        return ans;
    }
    void solve(vector<int>&arr,int tar,int &st, vector<vector<int>>&ans,vector<int>&output){
        if(sum(output)==tar){
            ans.push_back(output);
            return ;
        }
        if(sum(output)>tar){
            return ;
        }
        for(int i=st;i<arr.size();i++){
            output.push_back(arr[i]);
            solve(arr,tar,i,ans,output);
            output.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int tar) {
        int st=0;
        vector<vector<int>>ans;
        vector<int>output;
        solve(arr,tar,st,ans,output);
        return ans;
    }
};