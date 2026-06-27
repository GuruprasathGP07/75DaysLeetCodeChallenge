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
    int totalcount(ListNode* temp){
        int c=0;
        while(temp){
            c++;
            temp=temp->next;
        }
        return c;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* t=head;
        for(int i=0;i<k-1;i++){
            temp=temp->next;
        }
        int n=totalcount(head);
        int r=n-k;
        for(int i=0;i<r;i++){
            t=t->next;
        }
        int forsome=temp->val;
        temp->val=t->val;
        t->val=forsome;
        return head;
    }
};