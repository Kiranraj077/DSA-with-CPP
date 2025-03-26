/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // Initialize two pointers: slow and fast
        ListNode *slow = head;
        ListNode *fast = head;
        bool flag = false; // Flag to check if a cycle is detected
        
        // Step 1: Detect if a cycle exists using Floyd's Tortoise and Hare algorithm
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;       // Move slow pointer one step
            fast = fast->next->next; // Move fast pointer two steps
            
            // If slow and fast meet, a cycle is detected
            if (slow == fast) {
                flag = true;
                break;
            }
        }

        // If no cycle is found, return NULL
        if (!flag) {
            return NULL;
        }

        // Step 2: Find the entry point of the cycle
        fast = head; // Reset fast pointer to head
        
        // Move both pointers one step at a time until they meet at the cycle start
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        // The meeting point is the start of the cycle
        return slow;
    }
};
