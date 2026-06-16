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
    bool isPalindrome(ListNode* head) {
        if(head->next == NULL) return true;

     
        int ct = 0;
        ListNode *temp = head;

        while(temp != NULL) {
            ct += 1;
            temp = temp->next;
        }

        int mid = ct / 2;


        ListNode *prev = NULL, *curr = head;

        while(mid--) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = NULL;

   
        ListNode *fut;
        fut = prev = NULL;

        while(curr != NULL) {
            fut = curr->next;
            curr->next = prev;

            prev = curr;
            curr = fut;
        }


        ListNode *temp1 = head;
        ListNode *temp2 = prev; 

        while(temp1 != NULL && temp2 != NULL) {
            if(temp1->val != temp2->val) return false;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        return true;
    }
};
