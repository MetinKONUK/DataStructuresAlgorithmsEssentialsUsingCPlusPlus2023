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
        ListNode *node = head;
        int n = 0;
        while(node != NULL){
            n++;
            node = node->next;
        }
        if(n == 0 || n == 1) return true;
        int x = n % 2 ? n / 2 + 1 : n / 2;
        n = n / 2;

        ListNode *current = head, *prev = NULL;
        ListNode *rtail = current;
        ListNode *rhead = NULL;
        int i = 0;
        while(i < n){
            ListNode *next = current->next;
            current->next = rhead;
            rhead = current;
            current = next;
            i++;
        }
        if(prev != NULL){
            prev->next = rhead;
        } else {
            head = rhead;
        }
        rtail->next = current;

        ListNode *aux = head;
        for(int i = 0; i < x; ++i){
            aux = aux->next;
        }

        while(aux != NULL){
            if(head->val != aux->val){
                return false;
            }
            aux = aux->next;
            head = head->next;
        }
        return true;
    }
};