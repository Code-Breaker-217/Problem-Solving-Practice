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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0); // Dummy node to hold the result
        ListNode* current = dummy; // Pointer to the current node in the result list
        int carry = 0; // Initialize carry to 0

        // Traverse both lists until one of them reaches the end
        while (l1 != nullptr || l2 != nullptr) {
            // Get the values of current nodes or 0 if the node is nullptr
            int val1 = (l1 != nullptr) ? l1->val : 0;
            int val2 = (l2 != nullptr) ? l2->val : 0;
            
            // Calculate the sum of current digits and the carry
            int sum = val1 + val2 + carry;
            
            // Update carry for the next calculation
            carry = sum / 10;
            
            // Create a new node with the digit sum % 10 and move current pointer forward
            current->next = new ListNode(sum % 10);
            current = current->next;
            
            // Move to the next nodes in both lists if they are not nullptr
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }
        
        // If there's still a carry after traversing both lists, add it to the result
        if (carry > 0) {
            current->next = new ListNode(carry);
        }
        
        // Return the result list, skipping the dummy node
        return dummy->next;
    }
};