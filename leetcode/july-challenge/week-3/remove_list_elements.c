
struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode *walk = NULL;
    struct ListNode *prev = NULL;
    struct ListNode *tmp = NULL;
    
    if (head == NULL)   return NULL;
    
    while (head && head->val == val) {
        tmp = head;
        head = head->next;
        tmp->next = NULL;
        free(tmp);
    }
    
    walk = head;
    
    while (walk) {
        if (walk->val == val) {
            prev->next = walk->next;
            walk->next = NULL;
            tmp = walk;
            free(tmp);
            walk = prev->next;
        } else {
            prev = walk;
            walk = walk->next;
        }
    }
    
    return head;
}
