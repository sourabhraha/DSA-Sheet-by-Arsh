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
    int getDecimalValue(ListNode* head) {
        
        ListNode *t = head;
        string bin;
        
        while(t!= NULL)
        {
            bin += to_string(t->val);   
            t = t->next;
        }
        
        return stoi(bin, 0, 2);
    }
};