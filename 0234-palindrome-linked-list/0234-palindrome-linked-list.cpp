class Solution {
public:
    bool isPalindrome(ListNode* head) {

        if(head == NULL || head->next == NULL)
        {
            return true;
        }

        
        ListNode* copyHead = new ListNode(head->val);
        ListNode* temp = copyHead;
        ListNode* curr = head->next;

        while(curr != NULL)
        {
            temp->next = new ListNode(curr->val);
            temp = temp->next;
            curr = curr->next;
        }

        
        ListNode* prev = NULL;
        curr = copyHead;
        ListNode* next = NULL;

        while(curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        
        ListNode* temp1 = head;
        ListNode* temp2 = prev;

        while(temp1 != NULL && temp2 != NULL)
        {
            if(temp1->val != temp2->val)
            {
                return false;
            }

            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        return true;
    }
};