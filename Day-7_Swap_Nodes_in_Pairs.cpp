/*
 * DATE: 14/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/swap-nodes-in-pairs/description/
 * PROBLEM STATEMENT:
 *        Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)

Example 1:
Input: head = [1,2,3,4]
Output: [2,1,4,3]
Explanation:
// Explanation is in a figure.


Example 2:
Input: head = []
Output: []

Example 3:
Input: head = [1]
Output: [1]

Example 4:
Input: head = [1,2,3]
Output: [2,1,3]

Constraints:
The number of nodes in the list is in the range [0, 100].
0 <= Node.val <= 100

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

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swwap(ListNode* & head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode*prev=NULL;
        ListNode* curr=head;
        ListNode* temp=NULL;
        int count=0;
        while(count<2){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
            count++;
        }
        if(temp!=NULL){
            head->next=swwap(temp);
        }
        return prev;

    }
    ListNode* swapPairs(ListNode* head) {
        ListNode* ans=swwap(head);
        return ans;   
    }
};