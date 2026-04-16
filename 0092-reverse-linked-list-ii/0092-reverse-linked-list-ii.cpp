class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>arr;
        ListNode* temp=head;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        reverse(arr.begin()+(left-1),arr.begin()+right);
        ListNode* d=new ListNode;
        ListNode* ans=d;
        for(int i=0;i<arr.size();i++){
            ans->next=new ListNode(arr[i]);
            ans=ans->next;
        }
        return d->next;
        
    }
};