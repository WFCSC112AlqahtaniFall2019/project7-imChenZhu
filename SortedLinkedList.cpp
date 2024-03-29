//
// Created by 朱宸 on 2019/11/14.
//

#include "Stack.h"

Stack::Stack(){
    head= nullptr;
}
void Stack::push_head(const Data &insert) {
    Node* newNode = new Node(insert);
    newNode->next = head;
    head = newNode;
}

bool Stack::pop_head() {
    if (head == nullptr){
        return false;
    }
    else {
        Node* toDelete = head;
        head = head->next;
        delete(toDelete);
        return true;
    }
}
