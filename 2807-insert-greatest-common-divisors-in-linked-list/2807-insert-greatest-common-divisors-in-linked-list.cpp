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
    int gcd(int a,int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* d=new ListNode(0);
        ListNode* ans=d;
        ListNode* temp=head;
        if(head->next==NULL) return head;
        while(temp && temp->next!=NULL){
            int a=temp->val;
            int b=temp->next->val;
            int g=gcd(a,b);
            
            ListNode* nextone=temp->next;
            d->next=temp;
            d=d->next;
            d->next=new ListNode(g);
            d=d->next;
            d->next=nextone;
            d=d->next;

            temp=nextone;
        }
        return ans->next;   
    }
};