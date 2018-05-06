// Copyright (c) 2018 by contributors. All Rights Reserved.
// Author: Qichao Tang <qichaotang97@163.com>
// linked list class

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

namespace data_structure {

// linked list node
// template <typename T>
typedef struct node {
    int _data{0};  // TODO:to change template
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
    int insert(int data, int index = 0);
    int length();
    int remove(int data);
    int remove_index(int index);
    Node* find(int data);
    Node* find_index(int index);
    int reverse();
    int display();

private:
    Node* _p_head{nullptr};
    Node* _p_tail{nullptr};
    int _length{0};
};

}  // namespace data_structure

#endif  // LINKED_LIST_H_