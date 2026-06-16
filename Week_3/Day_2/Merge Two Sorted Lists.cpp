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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        ListNode *head, *tail;
        head = tail = NULL;

        while(head1 && head2) {
            if(head1->val <= head2->val) {
                if(head == NULL) {
                    head = new ListNode(head1->val);
                    tail = head;
                } else {
                    ListNode *temp = new ListNode(head1->val);
                    tail->next = temp;
                    tail = tail->next;
                }

                head1 = head1->next;
            } else {
                if(head == NULL) {
                    head = new ListNode(head2->val);
                    tail = head;
                } else {
                    ListNode *temp = new ListNode(head2->val);
                    tail->next = temp;
                    tail = tail->next;
                }

                head2 = head2->next;
            }
        }

        while(head1) {
            if(head == NULL) {
                    head = new ListNode(head1->val);
                    tail = head;
                } else {
                    ListNode *temp = new ListNode(head1->val);
                    tail->next = temp;
                    tail = tail->next;
                }

                head1 = head1->next;
        }

        while(head2) {
            if(head == NULL) {
                head = new ListNode(head2->val);
                tail = head;
            } else {
                ListNode *temp = new ListNode(head2->val);
                tail->next = temp;
                tail = tail->next;
            }

            head2 = head2->next;
        }

        return head;
    }
};
