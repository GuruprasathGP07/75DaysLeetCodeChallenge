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
    int countnodes(ListNode* temp){
        int c=0;
        while(temp){
            c++;
            temp=temp->next;
        }
        return c;
    }
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int tot=countnodes(head);
        int divi=tot/k;
        int firstno=tot%k;
        vector<ListNode*>ans;
        int size=0;
        ListNode* temp=head;
        for(int i=0;i<k;i++){
            if(temp==nullptr){
                ans.push_back(nullptr);
                continue;
            }
            ListNode* part=temp;
            if(firstno>0){
                size=divi+1;
            }
            else size=divi;
            if(firstno>0) firstno--;
            for(int i=0;i<size-1;i++){
                if(temp!=nullptr)temp=temp->next;
            }
            ListNode* nextpart=temp->next;
            temp->next=NULL;
            ans.push_back(part);
            temp=nextpart;
            
        }
        return ans;
    }
};