/*
 * DATE: 15/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/reorder-list/description/
 * PROBLEM STATEMENT:
 *      You are given the head of a singly linked-list. The list can be represented as:

L0 → L1 → … → Ln - 1 → Ln
Reorder the list to be on the following form:

L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
You may not modify the values in the list's nodes. Only nodes themselves may be changed.

Example 1:
//Image is in leetcode

Input: head = [1,2,3,4]
Output: [1,4,2,3]

Example 2:

Input: head = [1,2,3,4,5]
Output: [1,5,2,4,3]
 
Constraints:
The number of nodes in the list is in the range [1, 5 * 104].
1 <= Node.val <= 1000

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
int findlength(ListNode* &head){
    ListNode* temp=head;
    int i=0;
    while(temp!=NULL){
        temp=temp->next;
        i++;
    }
    return i;
}
    ListNode* reorder(ListNode* &head,int len,ListNode*&ans){
        if(head==NULL){
            return NULL;
        }
        if(len<=0){
            ans->next=NULL;
            return ans;
        }
            ListNode* tail=ans;
            ListNode* temp=head;
            ListNode* middlennode=temp->next;
            tail->next=temp;
            tail=temp;
            int i=0;
            ListNode* prev=head;
        while(i<len-1){
            prev=prev->next;
            i++;
        }
            ListNode* temp1=prev;
            tail->next=temp1;
            tail=temp1;
            tail->next=NULL;
            reorder(middlennode,len-2,tail);
            return ans;
    }   
    void reorderList(ListNode*& head) {
        int len=findlength(head);
        ListNode* dummy =new ListNode(-1);
        reorder(head,len,dummy);
        head=dummy->next;
    }
};