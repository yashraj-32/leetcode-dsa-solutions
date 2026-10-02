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
    ListNode* partition(ListNode* head, int x) {
        if(head == NULL)return head;
        ListNode* cur = head;
        ListNode* L1 = NULL;
        ListNode* L2 = NULL;
        ListNode* cur1 = L1;
        ListNode* cur2 = L2;
        while (cur != NULL){
            if(cur->val < x){
                if(L1 ==NULL){
                    L1 = cur;
                    cur=cur->next;
                    cur1= L1;
                    continue;
                }
                cur1->next = cur;
                cur1 = cur1->next;
                cur=cur->next;

            }
          else{
                if(L2 ==NULL){
                    L2 = cur;
                    cur=cur->next;
                    cur2= L2;
                    continue;
                }
                cur2->next = cur;
                cur2 = cur2->next;
                cur=cur->next;

            }

        }
        if(L1 == NULL && L2!= NULL)return L2;
        if(L2 == NULL && L1!= NULL)return L1;
        else{ cur2->next = NULL;
         cur1->next = L2;
       
        return L1;
        }
        
    }
};