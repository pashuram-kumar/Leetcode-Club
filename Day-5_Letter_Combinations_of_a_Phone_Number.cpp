/*
 * DATE: 14/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
 * PROBLEM STATEMENT:
 *        Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

//IMAGE THAT ARE PRESENT IN A LEETCODE

Example 1:
Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

Example 2:
Input: digits = "2"
Output: ["a","b","c"]
 
Constraints:
1 <= digits.length <= 4
digits[i] is a digit in the range ['2', '9'].

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
void solve(string& digits,vector<string>&map,vector<string>&ans,string output,int i){
    if(i>=digits.size()){
        ans.push_back(output);
        return;
    }
    int digit=digits[i]-'0';
    string value=map[digit];
    for(int j=0;j<value.size();j++){
        char ch=value[j];
        output.push_back(ch);
        solve(digits,map,ans,output,i+1);
        output.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
       vector<string>mapp(10);
        mapp[2]="abc";
        mapp[3]="def";
        mapp[4]="ghi";
        mapp[5]="jkl";
        mapp[6]="mno";
        mapp[7]="pqrs";
        mapp[8]="tuv";
        mapp[9]="wxyz";
        vector<string>ans;
        string output="";
        int i=0;
        solve(digits,mapp,ans,output,i);
        return ans;
    }
};