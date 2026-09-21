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
    ListNode* middleNode(ListNode* head) {
    ListNode* temp = head;
    int count = 0;
    
    while(temp->next != NULL ){
        temp = temp->next;
        count++;
    }
    int mid;
    if(count % 2 == 0){
         mid = (count / 2) ;}
    else{
        mid = (count / 2) + 1;
    }
        count = 0;
        temp = head;
        while(count < mid){
            temp = temp->next;
            count++;
        }
        return temp;

    
        
    }
};