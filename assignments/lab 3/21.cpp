class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if(list1 == NULL and list2 == NULL)
        return NULL;
        ListNode * ans = new ListNode(-1);
        ListNode * ptr = ans;
        ListNode *ptr1 = list1 , *ptr2 = list2;
        
        while(ptr1 or ptr2)
        {
            if(ptr1 == NULL)
            {
                ptr->next = ptr2;
                ptr = ptr->next;
                ptr2 = ptr2->next;
                continue;
            }
            if(ptr2 == NULL)
            {
                ptr->next = ptr1;
                ptr = ptr->next;
                ptr1 = ptr1->next;
                continue;
            }

            if( ptr1->val >= ptr2->val)
            {
                ptr->next = ptr2;
                ptr = ptr->next;
                ptr2 = ptr2->next;
            }
            else
            {
                ptr->next = ptr1;
                ptr = ptr->next;
                ptr1 = ptr1->next;
            }
            

        }
        return ans->next;
        
    }
};

