// Copyright (c) 2018 by contributors. All Rights Reserved.
// Author: Qichao Tang <qichaotang97@163.com>
// linked list class

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

namespace data_structure {

// linked list node
// template <typename T>
typedef struct node {
    int _data{0};  // TODO:后续改为 template
    struct node* _p_next{nullptr};
} Node;

class LinkedList {
public:
    LinkedList();
    virtual ~LinkedList();
    int clear();
    bool empty();
    int push_front(int data);
    int push_back(int data);
    int remove(int data);
    int display();

private:
    Node* _p_head{nullptr};
    Node* _p_tail{nullptr};
};

}  // namespace data_structure

#endif  // LINKED_LIST_H_