//
// Created by 朱宸 on 2019/11/14.
//

#ifndef PROJECT7_STACK_H
#define PROJECT7_STACK_H

#include "LinkedList.h"
class Stack: public LinkedList{
public:
    Stack();
    void push_head(const Data &insert);
    bool pop_head();
};


#endif //PROJECT7_STACK_H
