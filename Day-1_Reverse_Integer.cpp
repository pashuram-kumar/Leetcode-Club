/*
 * DATE: 13/09/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/reverse-integer/description/
 * PROBLEM STATEMENT:
 *        Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:
Input: x = 123
Output: 321

Example 2:
Input: x = -123
Output: -321

Example 3:
Input: x = 120
Output: 21
 
Constraints:
-231 <= x <= 231 - 1

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
int solvepos(int n){
    long long rev=0;
    while(n!=0){
        int a=n%10;
            rev=rev*10+a;
            n=n/10;
    }
   if(rev > 2147483647 || rev < -2147483648) return 0;

    return rev;
    // else{
    //     return rev;
    // }
}
    int reverse(int n) {
        int ans=0;
            ans=solvepos(n);
        return ans;
    }
};