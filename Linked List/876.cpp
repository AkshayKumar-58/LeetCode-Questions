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
    ListNode* middleNode(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast !=NULL && fast->next != NULL) //For odd and even. If nodes are even then fast will be at null pointer so we stop and if nodes are odd then fast will be at last node
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};