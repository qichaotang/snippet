// Copyright (c) 2018 by contributors. All Rights Reserved.
// Author: Qichao Tang <qichaotang97@163.com>

#include <iostream>

#include "linked_list.h"

namespace data_structure {
//
LinkedList::LinkedList() {
}
//
LinkedList::~LinkedList() {
}
// clear linked list
int LinkedList::clear() {
    Node* p_temp{nullptr};
    while (_p_head != nullptr) {
        p_temp = _p_head->_p_next;
        delete _p_head;
        _p_head = p_temp;
    }
    _p_head = nullptr;
    _p_tail = nullptr;
    return 0;
}
//
bool LinkedList::empty() {
    return (_p_head == nullptr);
}
// insert data at head
int LinkedList::push_front(int data) {
    auto p_temp = new Node();
    p_temp->_data = data;
    p_temp->_p_next = nullptr;

    if (empty()) {
        _p_tail = p_temp;
    } else {
        p_temp->_p_next = _p_head;  // 前向插入法
    }

    _p_head = p_temp;
    return 0;
}
// insert data at tail
int LinkedList::push_back(int data) {
    auto p_temp = new Node();
    p_temp->_data = data;
    p_temp->_p_next = nullptr;

    if (empty()) {
        _p_head = p_temp;
        _p_tail = p_temp;
    } else {
        _p_tail->_p_next = p_temp;
        _p_tail = p_temp;
    }

    return 0;
}

// remove data
int LinkedList::remove(int data) {
    if (empty()) {
        std::cout << "LinkedList is Empty!!!" << std::endl;
        return -1;
    }
    auto p_current = _p_head;
    auto p_previous = _p_head;
    bool is_find = false;
    while (p_current != nullptr) {
        if (p_current->_data == data) {
            is_find = true;
            std::cout << "success find--->" << data << std::endl;
            break;
        }
        p_previous = p_current;
        p_current = p_current->_p_next;
    }

    // 未找到此个节点
    if (!is_find) {
        std::cout << "failure find--->" << data << std::endl;
        return -1;
    }

    // 删除头节点
    if (p_current == _p_head) {
        _p_head = p_current->_p_next;
    } else {
    // 删除其他节点
        // p_previous p_current p_current->_p_next
        p_previous->_p_next = p_current->_p_next;
    }
    // 删除节点操作
    {
        if (p_current != nullptr) {
            delete p_current;
            p_current = nullptr;
        }
    }

    return 0;
}
// display LinkedList data
int LinkedList::display() {
    if (empty()) {
        std::cout << "LinkedList is Empty!!!" << std::endl;
        return -1;
    }
    auto p_temp = _p_head;
    std::cout << "start display" << std::endl;
    while (p_temp != nullptr) {
        std::cout << p_temp->_data << " ";   // core 在这里了
        p_temp = p_temp->_p_next;
    }
    std::cout << std::endl;
    std::cout << "end display" << std::endl;
    return 0;
}

}  // namespace data_structure
