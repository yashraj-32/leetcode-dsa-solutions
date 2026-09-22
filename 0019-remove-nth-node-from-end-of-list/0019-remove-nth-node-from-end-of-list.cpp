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
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        int i=0;
        while(i<n){
            temp2 = temp2->next;
            i++;
        }
        while(temp2 !=NULL && temp2->next!= NULL){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        if(temp2 == NULL){
    return head->next;
}
        
        temp1->next=temp1->next->next;
        return head;

        
    }
};