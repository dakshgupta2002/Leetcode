#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fast=head, *slow=head;
        for (int i=1; i<=n; i++){
            fast=*fast.next;
        }
        while (fast && fast->next != nullptr){
            fast=fast->next;
            slow=slow->next;
        }

        if (slow == head) {
            return head->next;
        }

        slow->next = slow->next->next;
        return head;

    }
};