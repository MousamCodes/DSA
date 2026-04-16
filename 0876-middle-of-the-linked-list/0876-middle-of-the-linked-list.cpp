class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;       // Moves 1 step
            fast = fast->next->next; // Moves 2 steps
        }

        
        return slow;
    }
};