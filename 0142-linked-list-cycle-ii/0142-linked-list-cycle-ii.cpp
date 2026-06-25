/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:

    ListNode *detectCycle(ListNode *head) {
        while(head==NULL || head->next==NULL) return NULL;
        ListNode* temp=head;
        while(head && head->next){
            
            temp->val=INT_MIN;
            
            if(temp->next->val==INT_MIN){
                return head->next;
            }
            temp=temp->next;
            head=head->next;
        }
        return NULL;

    }
};