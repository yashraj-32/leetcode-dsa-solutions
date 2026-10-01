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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k == 0) return head;
        int count =1;
        ListNode* head1 = head;
        ListNode* temp = head;
    
        for (int i = 1;i>0;i++){
            if(temp->next != NULL){
                temp = temp->next;
                count++;
                continue;
            }
            else break;

        }
        // found out the number of nodes
        temp = head;
        k = k%count;
        if(k == 0)return head;

        for(int i = 1 ; i <=count-k; i++ ){
            if( i == count-k){
                head1 = temp->next;
                break;
            }
            temp = temp->next;
        }
        temp = head1;
        // head1 = jo head hona chaahiye and rn temp = head1

        
        for (int i = 1 ; i>0; i++){
            if(temp->next == NULL){
                temp->next = head;
                i--;
                break;
            }
           
            temp = temp->next;
        }
        //last node ko head se jod diya

         for (int i = 1 ; i>0; i++){
                if(temp->next == head1){
                        temp->next = NULL;
                        
                    
                        return head1;
                    }
                    temp = temp->next;
         }  
         //head1 se pehel wali connection break krdi
        return head1;



    }
};