ListNode* reverseLinkedList(ListNode* head){
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* newHead = NULL;
        while(head!=NULL){
            ListNode* next = head->next;
            head->next = newHead;
            newHead = head;
            head = next;
        }
        return newHead;
    }




    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return true;

        }

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next != NULL&& fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        slow->next = reverseLinkedList(slow->next);
        slow = slow->next;

        ListNode* dummy = head;

        while(slow!=NULL){
            if(dummy->val != slow->val){
                return false;
            }
            slow = slow->next;
            dummy = dummy->next;
        }
        return true;
    }
