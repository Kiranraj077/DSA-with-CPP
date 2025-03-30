class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Create a dummy node to simplify the merging process
        ListNode* dummy = new ListNode(-1);
        ListNode* res = dummy;

        // Merge both lists while both are not empty
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                res->next = list1;
                list1 = list1->next;
            } else {
                res->next = list2;
                list2 = list2->next;
            }
            res = res->next;  // Move the result pointer forward
        }

        // Attach the remaining nodes from either list (if any)
        if (list1 != nullptr) {
            res->next = list1;
        } else {
            res->next = list2;
        }

        // The merged list starts at dummy->next
        return dummy->next;
    }
};
