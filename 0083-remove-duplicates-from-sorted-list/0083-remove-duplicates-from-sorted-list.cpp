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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        while(temp!=NULL&&temp->next!=NULL){
            if(temp->val==temp->next->val){
                ListNode* t=temp->next;
                while(t!=NULL&&temp->val==t->val){
                    t=t->next;
                }
                temp->next=t;
            }
            else{
                temp=temp->next;
            }
        }
        return head;
    }
};