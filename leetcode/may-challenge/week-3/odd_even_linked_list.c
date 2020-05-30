
struct ListNode* oddEvenList(struct ListNode* head){

    if (head == NULL)   return NULL;
    if (head->next == NULL)     return head;

    struct ListNode *even_ptr = head;
    struct ListNode *odd_ptr = head->next;
    struct ListNode *first_odd_ptr = odd_ptr;
    struct ListNode *ptr = head;
    int count = 0;

    while (ptr) {
        ++count;
        ptr = ptr->next;
    }

    while (even_ptr->next->next && odd_ptr->next->next) {
        even_ptr->next = even_ptr->next->next;
        odd_ptr->next = odd_ptr->next->next;
        even_ptr = even_ptr->next;
        odd_ptr = odd_ptr->next;
    }

    if (count % 2 == 1) {
        even_ptr->next = odd_ptr->next;
        even_ptr = even_ptr->next;
    }    
    even_ptr->next = first_odd_ptr;
    odd_ptr->next = NULL;
    return head;
}
