class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        //ListNode* removeElements(ListNode* head, int val) {
        ListNode* prev = nullptr;
        ListNode* current = head;
        ListNode* result = head;
        
        while(current) {
            if(current->val == val) {
                ListNode* temp = current;
                if(!prev) {
                    current = current->next;
                    result = current;
                } else {
                    prev->next = current->next;
                    current = current->next;
                }   
                delete temp;
            } else {
                prev = current;
                current = current->next;
            }
        }
        return result;
    }
};
