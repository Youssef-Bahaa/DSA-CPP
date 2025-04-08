//
// Created by 20109 on 3/26/2025.
//

#include "LL.h"

#include <iostream>

using namespace std;

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


void LinkedList::delete_first() {
    if (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
        length--;
        if (!length)
            head = tail = nullptr;
    }

}

void LinkedList::delete_last() {
    if (length == 1)
        delete_first();
    else {
        tail = get_nth_node(length - 1);
        delete tail->next;
        tail->next = nullptr;
        length--;
    }

}




void LinkedList::delete_val(int val) {
    Node* prev;
    Node* cur = head;

    if (head->val ==val) {
        delete_first();
        return;
    }

    if (tail->val == val) {
        delete_last();
        return;
    }
    while (cur) {
        if (cur->val == val) {
            prev->next = cur->next;
            length--;
            delete cur;
            return;

        }
        prev = cur;
        cur = cur->next;
    }

}


void LinkedList::delete_idx(int idx) {
    if (idx < 0 or idx >= length)
        return;

    if (idx ==0) {
        delete_first();
        return;
    }
    if (idx == length - 1) {
        delete_last();
        return;
    }


    Node* cur = get_nth_node(idx);
    Node* prev = get_nth_node(idx-1);

    prev->next = cur->next;
    delete cur;
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

int LinkedList::size(){return length;}


bool LinkedList::is_empty() {
    return length == 0;
}

void LinkedList::clear() {
    while (head) {
        Node* temp = head->next;
        delete head;
        head = temp;
    }

}

int LinkedList::get_first() {if (head)return head->val;}

int LinkedList::get_last() {if (head)return tail->val;}


void LinkedList::sort() {

    vector<int> v;
    Node* cur = head;
    while (cur) {
        v.push_back(cur->val);
        cur = cur->next;
    }

    std::sort(v.begin(),v.end());

    cur = head;
    for (auto i : v) {
        cur->val = i;
        cur = cur->next;
    }
}









