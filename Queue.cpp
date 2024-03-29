//
// Created by 朱宸 on 2019/11/14.
//

#include "Queue.h"
using namespace std;
Queue::Queue() {
    head = nullptr;
    tail = nullptr;
}

void Queue::enqueue_tail(const Data &insert) {
    Node* newNode = new Node(insert);
    if (head == nullptr){
        head= newNode ;
        tail = newNode;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
}

bool Queue::dequeue_head() {
    if(head->next == tail){
        return false;
    }
    else{
        Node* toDelete = head;
        head = head->next;
        delete(toDelete);
        return true;
    }
}