//
// Created by Александр Киселев on 13.10.2020.
//

#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    explicit ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    static ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *dummyHead = new ListNode(0);
        ListNode *p = l1, *q = l2, *curr = dummyHead;
        int carry = 0;
        while (p != nullptr || q != nullptr) {
            int x = (p != nullptr) ? p->val : 0;
            int y = (q != nullptr) ? q->val : 0;
            int sum = carry + x + y;
            carry = sum / 10;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
            if (p != nullptr) p = p->next;
            if (q != nullptr) q = q->next;
        }
        if (carry > 0) {
            curr->next = new ListNode(carry);
        }
        return dummyHead->next;
    }
};

int main() {
    ListNode ln11 = ListNode(3);
    ListNode ln12 = ListNode(4, &ln11);
    ListNode ln13 = ListNode(2, &ln12);

    ListNode ln21 = ListNode(4);
    ListNode ln22 = ListNode(6, &ln21);
    ListNode ln23 = ListNode(5, &ln22);

    ListNode *ans = Solution::addTwoNumbers(&ln13, &ln23);

    while (ans != nullptr) {
        cout << ans->val << " ";
        ans = ans->next;
    }
}
