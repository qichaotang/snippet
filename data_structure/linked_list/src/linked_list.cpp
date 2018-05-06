// Copyright (c) 2018 by contributors. All Rights Reserved.
// Author: Qichao Tang <qichaotang97@163.com>

#include "linked_list.h"

#include <iostream>

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
        _p_head = nullptr;
        _p_head = p_temp;
    }
    _p_head = nullptr;
    _p_tail = nullptr;
    _length = 0;
    return 0;
}
//
bool LinkedList::empty() {
    return (_length == 0);
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
    ++_length;
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

    ++_length;
    return 0;
}
// insert data at index similar with push_front
int LinkedList::insert(int data, int index) {
    if (index < 0 || index >= _length) {
        std::cout << "index error " << index << std::endl;
        return 0;
    }
    auto p_temp = new Node();
    p_temp->_data = data;
    p_temp->_p_next = nullptr;

    // 链表为空
    if (empty()) {
        _p_tail = p_temp;
        _p_head = p_temp;
        ++_length;
        return 0;
    }

    // 插入头部
    if (index == 0) {
        p_temp->_p_next = _p_head;
        _p_head = p_temp;
        ++_length;
        return 0;
    }

    // 插入中间
    auto p_current = _p_head;
    auto p_previous = _p_head;
    bool is_find = false;
    int real_index = 0;
    while (p_current != nullptr) {
        if (real_index == index) {
            is_find = true;
            p_temp->_p_next = p_current;
            p_previous->_p_next = p_temp;
            break;
        }

        p_previous = p_current;
        p_current = p_current->_p_next;
        ++real_index;
    }

    // 插入尾部
    if (!is_find) {
        _p_tail->_p_next = p_temp;
        _p_tail = p_temp;
    }
    ++_length;
    return 0;
}
// return length
int LinkedList::length() {
    return _length;
    //int len = 0;
    //auto p_temp = _p_head;
    //while (p_temp != nullptr) {
    //    ++len;
    //    p_temp = p_temp->_p_next;
    //}
    //return len;
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
    int real_index = 0;
    while (p_current != nullptr) {
        if (p_current->_data == data) {
            is_find = true;
            std::cout << "success find--->" << data << std::endl;
            break;
        }
        p_previous = p_current;
        p_current = p_current->_p_next;
        ++real_index;
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

    --_length;

    return 0;
}
// remove data by index
int LinkedList::remove_index(int index) {
    int len = length();
    if (_length == 0) {
        std::cout << "LinkedList is empty" << std::endl;
        return 0;
    }
    if (index < 0 || index >= _length) {
        std::cout << "index out of bounds" << std::endl;
        return 0;
    }
    // traverse linked list
    auto p_current = _p_head;
    auto p_previous = _p_head;
    bool is_find = false;
    int real_index = 0;
    while (p_current != nullptr) {
        if (real_index == index) {
            is_find = true;
            std::cout << "success find--->" << index << std::endl;
            break;
        }
        p_previous = p_current;
        p_current = p_current->_p_next;
        ++real_index;
    }

    // 未找到此个节点
    if (!is_find) {
        std::cout << "failure find--->" << index << std::endl;
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

    --_length;

    return 0;
}
// find data
Node* LinkedList::find(int data) {
    auto p_temp = _p_head;
    while (p_temp != nullptr) {
        if (p_temp->_data == data) {
            std::cout << "find data--->" << data << std::endl;
            break;
        }
        p_temp = p_temp->_p_next;
    }
    return p_temp;
}
// find data by index
Node* LinkedList::find_index(int index) {
    int real_index = 0;
    auto p_temp = _p_head;
    while (p_temp != nullptr) {
        if (real_index == index) {
            std::cout << "find index--->" << index << std::endl;
            break;
        }
        p_temp = p_temp->_p_next;
        ++real_index;
    }
    return p_temp;
}
// reverse linkedlist
int LinkedList::reverse() {
    if (empty()) {
        std::cout << "LinkedList is Empty!!!" << std::endl;
        return -1;
    }
    auto p_current = _p_head->_p_next;
    auto p_next = p_current->_p_next;
    // set _p_head->_p_next = nullptr;
    _p_head->_p_next = nullptr;
    while (p_current != nullptr) {
        p_next = p_current->_p_next;
        p_current->_p_next = _p_head;
        _p_head = p_current;
        p_current = p_next;
    }
    _p_tail = _p_head;
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
