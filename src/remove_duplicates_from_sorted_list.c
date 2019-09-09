#include <stdlib.h>

struct ListNode {
  int val;
  struct ListNode *next;
}

struct ListNode* deleteDuplicates(struct ListNode *head) {
  if (head == NULL | head->next == NULL) return head;
  struct ListNode *begin = head;
  struct ListNode *next = head->next;

  while ( next != NULL) {
    while (next != NULL && next->val == begin->val) {
      next = next->next;
    }
    begin->next = next;
    begin = next;
  }
  return head;
}
