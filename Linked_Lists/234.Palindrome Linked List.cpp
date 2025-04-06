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
    bool isPalindrome(ListNode* head) {
        // Step 1: Use fast and slow pointers to find the middle of the list
        ListNode* fast = head;
        ListNode* slow = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse the second half of the list starting from 'slow'
        ListNode* prev = NULL;
        ListNode* temp = slow;
        ListNode* next = NULL;
        while (temp != NULL) {
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }

        // Step 3: Compare values from the start and the reversed second half
        while (prev != NULL) {
            if (head->val != prev->val) {
                return false; // Mismatch found, not a palindrome
            }
            head = head->next;
            prev = prev->next;
        }

        // Step 4: If all matched, it is a palindrome
        return true;
    }
};
