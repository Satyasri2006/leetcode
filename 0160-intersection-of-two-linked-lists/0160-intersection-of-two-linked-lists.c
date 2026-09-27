/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode* temp1 = headA;
    struct ListNode* temp2 = headB;
    while(temp1 != temp2){
        temp1=temp1->next;
        temp2=temp2->next;
        if(temp1==NULL&&temp2==NULL){
            return NULL;
        }
        if(temp1==NULL)temp1=headB;
        if(temp2==NULL)temp2=headA;
    }
    return temp1;
}