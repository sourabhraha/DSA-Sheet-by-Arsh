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
    
    ListNode *endOfFirstHalf(ListNode *head)
    {
        ListNode *slow = head, *fast = head;
        while(fast->next && fast->next->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = NULL, *curr = head;
        while(curr)
        {
            ListNode *temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    
    
    bool isPalindrome(ListNode* head) {
        
        if(head == NULL) return true;
        
        ListNode *endOfFirst = endOfFirstHalf(head);
        ListNode *startOfSec = reverseList(endOfFirst->next);
        
        ListNode *p1 = head, *p2 = startOfSec;
        while(p2)
        {
            if(p1->val != p2->val)
                return false;
            p1 = p1->next;
            p2 = p2->next;
        }
        endOfFirst->next = reverseList(startOfSec);
        return true;
          
    }
};