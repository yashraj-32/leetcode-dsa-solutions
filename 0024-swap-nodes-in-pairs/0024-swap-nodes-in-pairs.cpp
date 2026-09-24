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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL )return head;
        ListNode* temp1 = head;
        ListNode* temp2 = head->next;
        head->next = temp2->next;
        temp2->next = temp1;
        if(temp2->next == NULL) return head;
        temp1 = temp2->next;
        head = temp2;
      
        while(temp1->next != NULL && temp1->next->next != NULL){
            ListNode* prev =temp1;
            temp1 = temp1->next;
            temp2 = temp1->next;
            temp1->next = temp2->next;
            temp2->next=temp1;
            prev->next = temp2;
            
        }





        return head; 
    }
};