//
// Created by 20109 on 3/26/2025.
//

#include "LL.h"

#include <iostream>

void LinkedList::insert(int data) {
    Node* newNode = new Node(data);
    if (!head) {
        head = tail= newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
    length++;
}

void LinkedList::print() {
    Node* temp = head;
    while (temp) {
        cout<< temp->val << " ";
        temp = temp->next;
    }
}


void LinkedList::delete_val(int val) {
    Node* prev;
    Node* cur = head;
    bool found = false;
    if (head->val ==val) {
        head = head->next;
        delete cur;
        return;
    }

    while (cur) {
        if (cur->val == val) {
            prev->next = cur->next;
            delete cur;
            return;

        }
        prev = cur;
        cur = cur->next;
    }

    if (tail->val == val) {
        found = 1;
        tail = prev;
    }
    if (found)
        length--;
}

Node* LinkedList::get_nth_node(int n) {
    int cnt = 1;
    for (Node* cur = head; cur; cur = cur->next)
        if (cnt++ == n)return cur;

    return nullptr;
}

int LinkedList::search(int val) {
    int cnt = 1;
    for (Node* cur = head; cur; cur = cur->next) {
        if (cur->val == val)return cnt;
        cnt++;
    }
    return -1;
}