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
        int size = 0;  
        ListNode *temp = head;

        // Edge case: If the list is empty, return null
        if (head == NULL) {
            return head;
        }

        // Edge case: If there's only one node, return null (delete the only node)
        if (head->next == NULL) {
            head = NULL;
            return head;
        }

        // First pass: Calculate the size of the linked list
        while (temp != NULL) {
            temp = temp->next;
            size++;
        }

        // Find the position from the beginning
        int t = size - n;

        // Edge case: If the node to be deleted is the head
        if (t == 0) {
            head = head->next; // Move head to the next node
            return head;
        }

        temp = head;  // Reset temp to head
        ListNode *prev = nullptr;  // Pointer to keep track of previous node

        // Traverse to the node just before the target node
        while (t) {
            prev = temp;
            temp = temp->next;
            t--;
        }

        // Remove the nth node by skipping it
        prev->next = prev->next->next;

        return head;  // Return the modified list
    }
};
