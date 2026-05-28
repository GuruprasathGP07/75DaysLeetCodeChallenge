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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int c=0;
        while(temp!=NULL){
            temp=temp->next;
            c+=1;
        }
        int a=c-n;
        if(a==0){
            return head->next;
        }
        ListNode* temp1=head;
        int i=1;
        while(i<a){
            temp1=temp1->next;
            i++;
        }
        temp1->next=temp1->next->next;
        return head;


    }
};