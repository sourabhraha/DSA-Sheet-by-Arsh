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
    
    int length(ListNode* head)
    {
        ListNode *t = head;
        int cnt = 0;
        while(t != NULL)
        {
            t = t->next;
            cnt++;
        }
        return cnt;
    }
    
    ListNode* middleNode(ListNode* head) {
        
        ListNode * temp = head;
        int loop = length(head);
        loop = ceil(loop/2);
        while(loop--)
            temp = temp->next;
        
        return temp;
        
    }
};