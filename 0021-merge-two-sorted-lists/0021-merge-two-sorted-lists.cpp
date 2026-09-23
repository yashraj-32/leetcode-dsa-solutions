class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode dummy(0);
        ListNode* ans1 = &dummy;

        while(list1 != NULL && list2 != NULL) {

            if(list1->val <= list2->val) {
                ans1->next = list1;
                list1 = list1->next;
            }
            else {
                ans1->next = list2;
                list2 = list2->next;
            }

            ans1 = ans1->next;
        }

        if(list1 != NULL) {
            ans1->next = list1;
        }
        else {
            ans1->next = list2;
        }

        return dummy.next;
    }
};