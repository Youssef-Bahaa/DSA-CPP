//
// Created by 20109 on 3/26/2025.
//

#include "LL.h"

#include <iostream>

void LinkedList::insert(int data) {
    Node* newNode = new Node(data);
    if (!head) {
        head = newNode;
        tail = head;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
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
    }

}

