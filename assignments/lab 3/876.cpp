class Solution {
public:
    ListNode* middleNode(ListNode* head) {
         ios::sync_with_stdio(0);
        ListNode* sl = head;
        ListNode* fs= head;
        while (fs && fs->next)
        {
            sl = sl->next;
            fs = fs->next->next;
        }
        
        return sl;
    }
};
