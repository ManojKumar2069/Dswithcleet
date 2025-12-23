/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapNodes(struct ListNode* head, int k) {
    struct ListNode *first = head, *second = head;
    struct ListNode *temp = head;

    int length = 0;

    // Step 1: Find length of list
    while (temp != NULL) {
        length++;
        temp = temp->next;
    }

    // Step 2: Move first to kth node from beginning
    for (int i = 1; i < k; i++) {
        first = first->next;
    }

    // Step 3: Move second to kth node from end
    for (int i = 1; i < length - k + 1; i++) {
        second = second->next;
    }

    // Step 4: Swap values
    int t = first->val;
    first->val = second->val;
    second->val = t;

    return head;
}
