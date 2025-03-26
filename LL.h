//
// Created by 20109 on 3/26/2025.
//

#ifndef LL_H
#define LL_H
#include <iostream>
using namespace std;

struct Node {
    int val{};
    Node *next{};
};



class LinkedList {
private:
    Node* head{};
    Node* tail{};

Public:
    void print();
    void insert(int data);
    void delete_val(int val);



};









#endif //LL_H
