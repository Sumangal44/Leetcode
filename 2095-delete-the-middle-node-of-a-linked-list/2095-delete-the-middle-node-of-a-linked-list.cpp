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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* last = head;
        int n=0;
        while(last!=NULL){
            n++;
            last = last->next;
        }
        if(n==0||n==1){
            return NULL;
        }
        last = head;
        for(int i =0; i<n/2-1; i++){
            last = last->next;
        }
        last->next = last->next->next;
        return head;
    }
};