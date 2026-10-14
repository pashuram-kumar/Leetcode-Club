/*
 * DATE: 14/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
 * PROBLEM STATEMENT:
 *          Given the head of a linked list, remove the nth node from the end of the list and return its head.

Example 1:
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]

Example 2:
Input: head = [1], n = 1
Output: []

Example 3:
Input: head = [1,2], n = 1
Output: [1]
 
Constraints:
The number of nodes in the list is sz.
1 <= sz <= 30
0 <= Node.val <= 100
1 <= n <= sz

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

    int findlength(ListNode* head) {
        int len = 0;
        ListNode* temp = head;

        while(temp != NULL) {
            temp = temp->next;
            len++;
        }

        return len;
    }

    ListNode* removenth(ListNode* head, int position) {

        int len = findlength(head);
        position = len - position;
        if(head->next==NULL){
            return NULL;
        }
        if(len==position){
            return head->next;
        }
        // head delete karna hai
        if(position == 0) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        int i = 1;
        ListNode* prev = head;

        while(i < position) {
            prev = prev->next;
            i++;
        }

        ListNode* temp = prev->next;
        prev->next = temp->next;
        delete temp;

        return head;
    }

    ListNode* removeNthFromEnd(ListNode* head, int position) {
        return removenth(head, position);
    }

};